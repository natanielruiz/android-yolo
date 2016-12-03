# TensorFlow YOLO object detection on Android
<div align="center">
  <img src="http://i.imgur.com/hskdvoi.png"><br><br>
</div>
[Source project](https://github.com/miyosuda/TensorFlowAndroidDemo)

**android-yolo** is an implementation of YOLO for TensorFlow on an Android device. It is compatible with Android Studio and usable out of the box. It can detect the 20 classes of objects in the Pascal VOC dataset: aeroplane, bicycle, bird, boat, bottle, bus, car, cat, chair, cow, dining table, dog, horse, motorbike, person, potted plant, sheep, sofa, train and tv/monitor.

To use this demo first clone the repository. Download the YOLO [model](https://drive.google.com/file/d/0B2fFW2t9-qW3MVJlQ29LRzlLT2c/view?usp=sharing) and put it in android-yolo/app/src/main/assets. Then open the project on Android Studio. Once the project is open you can run the project on your Android device using the Run 'app' command and selecting your device.

GPUs are not currently supported by TensorFlow on Android. If you have a decent Android device you will have around two frames per second of processed images. 

Here is a [video](http://youtu.be/EhMrf4G5Wf0) showing a small demo of the app.

Nataniel Ruiz  
School of Interactive Computing  
Georgia Institute of Technology  

Credits:
App launch icon made by [Freepik](http://www.freepik.com) from [Flaticon](http://www.flaticon.com) is licensed by [Creative Commons BY 3.0](http://creativecommons.org/licenses/by/3.0/).
