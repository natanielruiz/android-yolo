// GENERATED FILE - DO NOT MODIFY
#ifndef tensorflow_core_framework_device_attributes_proto_H_
#define tensorflow_core_framework_device_attributes_proto_H_

#include "tensorflow/core/framework/device_attributes.pb.h"
#include "tensorflow/core/platform/macros.h"
#include "tensorflow/core/platform/protobuf.h"
#include "tensorflow/core/platform/types.h"

namespace tensorflow {

// Enum text output for tensorflow.BusAdjacency
const char* EnumName_BusAdjacency(
    ::tensorflow::BusAdjacency value);

// Message-text conversion for tensorflow.DeviceAttributes
string ProtoDebugString(
    const ::tensorflow::DeviceAttributes& msg);
string ProtoShortDebugString(
    const ::tensorflow::DeviceAttributes& msg);
bool ProtoParseFromString(
    const string& s,
    ::tensorflow::DeviceAttributes* msg)
        TF_MUST_USE_RESULT;

}  // namespace tensorflow

#endif  // tensorflow_core_framework_device_attributes_proto_H_
