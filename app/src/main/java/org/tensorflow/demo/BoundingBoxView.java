/*  This file has been created by Nataniel Ruiz affiliated with Wall Lab
 *  at the Georgia Institute of Technology School of Interactive Computing
 */

package org.tensorflow.demo;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;

import org.tensorflow.demo.Classifier.Recognition;
import org.tensorflow.demo.TensorFlowImageListener;

import java.util.List;

public class BoundingBoxView extends View {
    private List<Recognition> results;
    private final Paint fgPaint, bgPaint, textPaint, trPaint;

    public BoundingBoxView(final Context context, final AttributeSet set) {
        super(context, set);

        fgPaint = new Paint();
        fgPaint.setColor(0xff00ff00);
        fgPaint.setStyle(Paint.Style.STROKE);
        fgPaint.setStrokeWidth(4);

        bgPaint = new Paint();
        bgPaint.setARGB(0, 0, 0, 0);
        bgPaint.setAlpha(0);
        bgPaint.setStyle(Paint.Style.STROKE);

        trPaint = new Paint();
        trPaint.setColor(0xff00ff00);
        trPaint.setStyle(Paint.Style.FILL);

        textPaint = new Paint();
        textPaint.setColor(Color.BLACK);
        textPaint.setStyle(Paint.Style.STROKE);
        textPaint.setTextSize(50);  //set text size
    }

    public void setResults(final List<Recognition> results) {
        this.results = results;
        postInvalidate();
    }

    @Override
    public void onDraw(final Canvas canvas) {

        // Get view size.
        float view_height_temp = (float) this.getHeight();
        float view_width_temp = (float) this.getWidth();
        float view_height = Math.max(view_height_temp, view_width_temp);
        float view_width = Math.min(view_height_temp, view_width_temp);

        String prediction_string = "width: " + Float.toString(view_width) +
                " height: " + Float.toString(view_height);
        Log.v("BoundingBox", prediction_string);

        // Compute multipliers and offsets.
        float INPUT_SIZE = (float) TensorFlowImageListener.getInputSize();
        float size_multiplier_x = view_width / INPUT_SIZE;
        float size_multiplier_y = size_multiplier_x;
        float offset_x = 0;
        float offset_y = (view_height - INPUT_SIZE * size_multiplier_y) / 2;

        if (results != null) {
            for (final Recognition recog : results) {
                // Get x, y, width and height before pre processing of
                // bounding boxes. Then pre-process the bounding boxes
                // by using the multipliers and offsets to map a 448x448 image
                // coordinates to a device_width x device_height surface
                RectF preBoundingBox = recog.getLocation();
                float bounding_x = preBoundingBox.left;
                float bounding_y = preBoundingBox.top;
                float box_width = preBoundingBox.right;
                float box_height = preBoundingBox.bottom;
                bounding_x *= size_multiplier_x;
                bounding_y *= size_multiplier_y;
                bounding_x += offset_x;
                bounding_y += offset_y;


                box_width *= size_multiplier_x;
                box_height *= size_multiplier_y;
                bounding_x -= box_width;
                bounding_y -= box_height;
                float bounding_x2 = bounding_x + 2 * box_width;
                float bounding_y2 = bounding_y + 2 * box_height;

                // Create new bounding box and draw it.
                RectF boundingBox = new RectF(bounding_x, bounding_y, bounding_x2, bounding_y2);

                canvas.drawRect(boundingBox, fgPaint);
                canvas.drawRect(boundingBox, bgPaint);

                // Create class name text on bounding box.
                String class_name = recog.getTitle();
                float text_width = textPaint.measureText(class_name)/2;
                float text_size = textPaint.getTextSize();
                float text_center_x = bounding_x - 2;
                float text_center_y = bounding_y - text_size;
                textPaint.setTextAlign(Paint.Align.CENTER);
                canvas.drawRect(text_center_x, text_center_y, text_center_x + 2 * text_width, text_center_y + text_size, trPaint);
                canvas.drawText(class_name, text_center_x + text_width, text_center_y + text_size, textPaint);

            }
        }
    }
}
