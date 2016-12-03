// GENERATED FILE - DO NOT MODIFY
#include "tensorflow/core/protobuf/saver.pb_text-impl.h"

using ::tensorflow::strings::Scanner;
using ::tensorflow::strings::StrCat;

namespace tensorflow {

string ProtoDebugString(
    const ::tensorflow::SaverDef& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, false);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

string ProtoShortDebugString(
    const ::tensorflow::SaverDef& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, true);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

namespace internal {

void AppendProtoDebugString(
    ::tensorflow::strings::ProtoTextOutput* o,
    const ::tensorflow::SaverDef& msg) {
  o->AppendStringIfNotEmpty("filename_tensor_name", ProtobufStringToString(msg.filename_tensor_name()));
  o->AppendStringIfNotEmpty("save_tensor_name", ProtobufStringToString(msg.save_tensor_name()));
  o->AppendStringIfNotEmpty("restore_op_name", ProtobufStringToString(msg.restore_op_name()));
  o->AppendNumericIfNotZero("max_to_keep", msg.max_to_keep());
  o->AppendBoolIfTrue("sharded", msg.sharded());
  o->AppendNumericIfNotZero("keep_checkpoint_every_n_hours", msg.keep_checkpoint_every_n_hours());
}

}  // namespace internal

bool ProtoParseFromString(
    const string& s,
    ::tensorflow::SaverDef* msg) {
  msg->Clear();
  Scanner scanner(s);
  if (!internal::ProtoParseFromScanner(&scanner, false, false, msg)) return false;
  scanner.Eos();
  return scanner.GetResult();
}

namespace internal {

bool ProtoParseFromScanner(
    ::tensorflow::strings::Scanner* scanner, bool nested, bool close_curly,
    ::tensorflow::SaverDef* msg) {
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
    if (identifier == "filename_tensor_name") {
      if (has_seen[0]) return false;
      has_seen[0] = true;
      string str_value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseStringLiteralFromScanner(
          scanner, &str_value)) return false;
      SetProtobufStringSwapAllowed(&str_value, msg->mutable_filename_tensor_name());
    }
    else if (identifier == "save_tensor_name") {
      if (has_seen[1]) return false;
      has_seen[1] = true;
      string str_value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseStringLiteralFromScanner(
          scanner, &str_value)) return false;
      SetProtobufStringSwapAllowed(&str_value, msg->mutable_save_tensor_name());
    }
    else if (identifier == "restore_op_name") {
      if (has_seen[2]) return false;
      has_seen[2] = true;
      string str_value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseStringLiteralFromScanner(
          scanner, &str_value)) return false;
      SetProtobufStringSwapAllowed(&str_value, msg->mutable_restore_op_name());
    }
    else if (identifier == "max_to_keep") {
      if (has_seen[3]) return false;
      has_seen[3] = true;
      int32 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_max_to_keep(value);
    }
    else if (identifier == "sharded") {
      if (has_seen[4]) return false;
      has_seen[4] = true;
      bool value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseBoolFromScanner(scanner, &value)) return false;
      msg->set_sharded(value);
    }
    else if (identifier == "keep_checkpoint_every_n_hours") {
      if (has_seen[5]) return false;
      has_seen[5] = true;
      float value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_keep_checkpoint_every_n_hours(value);
    }
  }
}

}  // namespace internal

}  // namespace tensorflow
