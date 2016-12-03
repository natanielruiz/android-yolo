// GENERATED FILE - DO NOT MODIFY
#include "tensorflow/core/framework/device_attributes.pb_text-impl.h"

using ::tensorflow::strings::Scanner;
using ::tensorflow::strings::StrCat;

namespace tensorflow {

const char* EnumName_BusAdjacency(
    ::tensorflow::BusAdjacency value) {
  switch (value) {
    case 0: return "BUS_0";
    case 1: return "BUS_1";
    case 2: return "BUS_ANY";
    case 3: return "BUS_NUM_ADJACENCIES";
    default: return "";
  }
}

string ProtoDebugString(
    const ::tensorflow::DeviceAttributes& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, false);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

string ProtoShortDebugString(
    const ::tensorflow::DeviceAttributes& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, true);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

namespace internal {

void AppendProtoDebugString(
    ::tensorflow::strings::ProtoTextOutput* o,
    const ::tensorflow::DeviceAttributes& msg) {
  o->AppendStringIfNotEmpty("name", ProtobufStringToString(msg.name()));
  o->AppendStringIfNotEmpty("device_type", ProtobufStringToString(msg.device_type()));
  o->AppendNumericIfNotZero("memory_limit", msg.memory_limit());
  if (msg.bus_adjacency() != 0) {
    o->AppendEnumName("bus_adjacency", ::tensorflow::EnumName_BusAdjacency(msg.bus_adjacency()));
  }
  o->AppendNumericIfNotZero("incarnation", msg.incarnation());
  o->AppendStringIfNotEmpty("physical_device_desc", ProtobufStringToString(msg.physical_device_desc()));
}

}  // namespace internal

bool ProtoParseFromString(
    const string& s,
    ::tensorflow::DeviceAttributes* msg) {
  msg->Clear();
  Scanner scanner(s);
  if (!internal::ProtoParseFromScanner(&scanner, false, false, msg)) return false;
  scanner.Eos();
  return scanner.GetResult();
}

namespace internal {

bool ProtoParseFromScanner(
    ::tensorflow::strings::Scanner* scanner, bool nested, bool close_curly,
    ::tensorflow::DeviceAttributes* msg) {
  std::vector<bool> has_seen(6, false);
  while(true) {
    ProtoSpaceAndComments(scanner);
    if (nested && (scanner->Peek() == (close_curly ? '}' : '>'))) {
      scanner->One(Scanner::ALL);
      ProtoSpaceAndComments(scanner);
      return true;
    }
    if (!nested && scanner->empty()) { return true; }
    scanner->RestartCapture()
        .Many(Scanner::LETTER_DIGIT_UNDERSCORE)
        .StopCapture();
    StringPiece identifier;
    if (!scanner->GetResult(nullptr, &identifier)) return false;
    bool parsed_colon = false;
    ProtoSpaceAndComments(scanner);
    if (scanner->Peek() == ':') {
      parsed_colon = true;
      scanner->One(Scanner::ALL);
      ProtoSpaceAndComments(scanner);
    }
    if (identifier == "name") {
      if (has_seen[0]) return false;
      has_seen[0] = true;
      string str_value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseStringLiteralFromScanner(
          scanner, &str_value)) return false;
      SetProtobufStringSwapAllowed(&str_value, msg->mutable_name());
    }
    else if (identifier == "device_type") {
      if (has_seen[1]) return false;
      has_seen[1] = true;
      string str_value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseStringLiteralFromScanner(
          scanner, &str_value)) return false;
      SetProtobufStringSwapAllowed(&str_value, msg->mutable_device_type());
    }
    else if (identifier == "memory_limit") {
      if (has_seen[2]) return false;
      has_seen[2] = true;
      int64 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_memory_limit(value);
    }
    else if (identifier == "bus_adjacency") {
      if (has_seen[3]) return false;
      has_seen[3] = true;
      StringPiece value;
      if (!parsed_colon || !scanner->RestartCapture().Many(Scanner::LETTER_DIGIT_DASH_UNDERSCORE).GetResult(nullptr, &value)) return false;
      if (value == "BUS_0" || value == "0" || value == "-0") {
        msg->set_bus_adjacency(::tensorflow::BUS_0);
      } else if (value == "BUS_1" || value == "1") {
        msg->set_bus_adjacency(::tensorflow::BUS_1);
      } else if (value == "BUS_ANY" || value == "2") {
        msg->set_bus_adjacency(::tensorflow::BUS_ANY);
      } else if (value == "BUS_NUM_ADJACENCIES" || value == "3") {
        msg->set_bus_adjacency(::tensorflow::BUS_NUM_ADJACENCIES);
      } else {
        return false;
      }
    }
    else if (identifier == "incarnation") {
      if (has_seen[4]) return false;
      has_seen[4] = true;
      uint64 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_incarnation(value);
    }
    else if (identifier == "physical_device_desc") {
      if (has_seen[5]) return false;
      has_seen[5] = true;
      string str_value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseStringLiteralFromScanner(
          scanner, &str_value)) return false;
      SetProtobufStringSwapAllowed(&str_value, msg->mutable_physical_device_desc());
    }
  }
}

}  // namespace internal

}  // namespace tensorflow
