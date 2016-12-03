// GENERATED FILE - DO NOT MODIFY
#include "tensorflow/core/protobuf/config.pb_text-impl.h"

using ::tensorflow::strings::Scanner;
using ::tensorflow::strings::StrCat;

namespace tensorflow {

string ProtoDebugString(
    const ::tensorflow::GPUOptions& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, false);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

string ProtoShortDebugString(
    const ::tensorflow::GPUOptions& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, true);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

namespace internal {

void AppendProtoDebugString(
    ::tensorflow::strings::ProtoTextOutput* o,
    const ::tensorflow::GPUOptions& msg) {
  o->AppendNumericIfNotZero("per_process_gpu_memory_fraction", msg.per_process_gpu_memory_fraction());
  o->AppendStringIfNotEmpty("allocator_type", ProtobufStringToString(msg.allocator_type()));
  o->AppendNumericIfNotZero("deferred_deletion_bytes", msg.deferred_deletion_bytes());
  o->AppendBoolIfTrue("allow_growth", msg.allow_growth());
}

}  // namespace internal

bool ProtoParseFromString(
    const string& s,
    ::tensorflow::GPUOptions* msg) {
  msg->Clear();
  Scanner scanner(s);
  if (!internal::ProtoParseFromScanner(&scanner, false, false, msg)) return false;
  scanner.Eos();
  return scanner.GetResult();
}

namespace internal {

bool ProtoParseFromScanner(
    ::tensorflow::strings::Scanner* scanner, bool nested, bool close_curly,
    ::tensorflow::GPUOptions* msg) {
  std::vector<bool> has_seen(4, false);
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
    if (identifier == "per_process_gpu_memory_fraction") {
      if (has_seen[0]) return false;
      has_seen[0] = true;
      double value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_per_process_gpu_memory_fraction(value);
    }
    else if (identifier == "allocator_type") {
      if (has_seen[1]) return false;
      has_seen[1] = true;
      string str_value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseStringLiteralFromScanner(
          scanner, &str_value)) return false;
      SetProtobufStringSwapAllowed(&str_value, msg->mutable_allocator_type());
    }
    else if (identifier == "deferred_deletion_bytes") {
      if (has_seen[2]) return false;
      has_seen[2] = true;
      int64 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_deferred_deletion_bytes(value);
    }
    else if (identifier == "allow_growth") {
      if (has_seen[3]) return false;
      has_seen[3] = true;
      bool value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseBoolFromScanner(scanner, &value)) return false;
      msg->set_allow_growth(value);
    }
  }
}

}  // namespace internal

const char* EnumName_OptimizerOptions_Level(
    ::tensorflow::OptimizerOptions_Level value) {
  switch (value) {
    case 0: return "L1";
    case -1: return "L0";
    default: return "";
  }
}

string ProtoDebugString(
    const ::tensorflow::OptimizerOptions& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, false);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

string ProtoShortDebugString(
    const ::tensorflow::OptimizerOptions& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, true);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

namespace internal {

void AppendProtoDebugString(
    ::tensorflow::strings::ProtoTextOutput* o,
    const ::tensorflow::OptimizerOptions& msg) {
  o->AppendBoolIfTrue("do_common_subexpression_elimination", msg.do_common_subexpression_elimination());
  o->AppendBoolIfTrue("do_constant_folding", msg.do_constant_folding());
  if (msg.opt_level() != 0) {
    o->AppendEnumName("opt_level", ::tensorflow::EnumName_OptimizerOptions_Level(msg.opt_level()));
  }
  o->AppendBoolIfTrue("do_function_inlining", msg.do_function_inlining());
}

}  // namespace internal

bool ProtoParseFromString(
    const string& s,
    ::tensorflow::OptimizerOptions* msg) {
  msg->Clear();
  Scanner scanner(s);
  if (!internal::ProtoParseFromScanner(&scanner, false, false, msg)) return false;
  scanner.Eos();
  return scanner.GetResult();
}

namespace internal {

bool ProtoParseFromScanner(
    ::tensorflow::strings::Scanner* scanner, bool nested, bool close_curly,
    ::tensorflow::OptimizerOptions* msg) {
  std::vector<bool> has_seen(4, false);
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
    if (identifier == "do_common_subexpression_elimination") {
      if (has_seen[0]) return false;
      has_seen[0] = true;
      bool value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseBoolFromScanner(scanner, &value)) return false;
      msg->set_do_common_subexpression_elimination(value);
    }
    else if (identifier == "do_constant_folding") {
      if (has_seen[1]) return false;
      has_seen[1] = true;
      bool value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseBoolFromScanner(scanner, &value)) return false;
      msg->set_do_constant_folding(value);
    }
    else if (identifier == "do_function_inlining") {
      if (has_seen[2]) return false;
      has_seen[2] = true;
      bool value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseBoolFromScanner(scanner, &value)) return false;
      msg->set_do_function_inlining(value);
    }
    else if (identifier == "opt_level") {
      if (has_seen[3]) return false;
      has_seen[3] = true;
      StringPiece value;
      if (!parsed_colon || !scanner->RestartCapture().Many(Scanner::LETTER_DIGIT_DASH_UNDERSCORE).GetResult(nullptr, &value)) return false;
      if (value == "L1" || value == "0" || value == "-0") {
        msg->set_opt_level(::tensorflow::OptimizerOptions_Level_L1);
      } else if (value == "L0" || value == "-1") {
        msg->set_opt_level(::tensorflow::OptimizerOptions_Level_L0);
      } else {
        return false;
      }
    }
  }
}

}  // namespace internal

string ProtoDebugString(
    const ::tensorflow::GraphOptions& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, false);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

string ProtoShortDebugString(
    const ::tensorflow::GraphOptions& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, true);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

namespace internal {

void AppendProtoDebugString(
    ::tensorflow::strings::ProtoTextOutput* o,
    const ::tensorflow::GraphOptions& msg) {
  o->AppendBoolIfTrue("enable_recv_scheduling", msg.enable_recv_scheduling());
  if (msg.has_optimizer_options()) {
    o->OpenNestedMessage("optimizer_options");
    ::tensorflow::internal::AppendProtoDebugString(o, msg.optimizer_options());
    o->CloseNestedMessage();
  }
  o->AppendNumericIfNotZero("build_cost_model", msg.build_cost_model());
  o->AppendBoolIfTrue("infer_shapes", msg.infer_shapes());
  o->AppendBoolIfTrue("place_pruned_graph", msg.place_pruned_graph());
}

}  // namespace internal

bool ProtoParseFromString(
    const string& s,
    ::tensorflow::GraphOptions* msg) {
  msg->Clear();
  Scanner scanner(s);
  if (!internal::ProtoParseFromScanner(&scanner, false, false, msg)) return false;
  scanner.Eos();
  return scanner.GetResult();
}

namespace internal {

bool ProtoParseFromScanner(
    ::tensorflow::strings::Scanner* scanner, bool nested, bool close_curly,
    ::tensorflow::GraphOptions* msg) {
  std::vector<bool> has_seen(5, false);
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
    if (identifier == "enable_recv_scheduling") {
      if (has_seen[0]) return false;
      has_seen[0] = true;
      bool value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseBoolFromScanner(scanner, &value)) return false;
      msg->set_enable_recv_scheduling(value);
    }
    else if (identifier == "optimizer_options") {
      if (has_seen[1]) return false;
      has_seen[1] = true;
      const char open_char = scanner->Peek();
      if (open_char != '{' && open_char != '<') return false;
      scanner->One(Scanner::ALL);
      ProtoSpaceAndComments(scanner);
      if (!::tensorflow::internal::ProtoParseFromScanner(
          scanner, true, open_char == '{', msg->mutable_optimizer_options())) return false;
    }
    else if (identifier == "build_cost_model") {
      if (has_seen[2]) return false;
      has_seen[2] = true;
      int64 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_build_cost_model(value);
    }
    else if (identifier == "infer_shapes") {
      if (has_seen[3]) return false;
      has_seen[3] = true;
      bool value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseBoolFromScanner(scanner, &value)) return false;
      msg->set_infer_shapes(value);
    }
    else if (identifier == "place_pruned_graph") {
      if (has_seen[4]) return false;
      has_seen[4] = true;
      bool value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseBoolFromScanner(scanner, &value)) return false;
      msg->set_place_pruned_graph(value);
    }
  }
}

}  // namespace internal

string ProtoDebugString(
    const ::tensorflow::ThreadPoolOptionProto& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, false);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

string ProtoShortDebugString(
    const ::tensorflow::ThreadPoolOptionProto& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, true);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

namespace internal {

void AppendProtoDebugString(
    ::tensorflow::strings::ProtoTextOutput* o,
    const ::tensorflow::ThreadPoolOptionProto& msg) {
  o->AppendNumericIfNotZero("num_threads", msg.num_threads());
}

}  // namespace internal

bool ProtoParseFromString(
    const string& s,
    ::tensorflow::ThreadPoolOptionProto* msg) {
  msg->Clear();
  Scanner scanner(s);
  if (!internal::ProtoParseFromScanner(&scanner, false, false, msg)) return false;
  scanner.Eos();
  return scanner.GetResult();
}

namespace internal {

bool ProtoParseFromScanner(
    ::tensorflow::strings::Scanner* scanner, bool nested, bool close_curly,
    ::tensorflow::ThreadPoolOptionProto* msg) {
  std::vector<bool> has_seen(1, false);
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
    if (identifier == "num_threads") {
      if (has_seen[0]) return false;
      has_seen[0] = true;
      int32 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_num_threads(value);
    }
  }
}

}  // namespace internal

namespace internal {
namespace {

bool ProtoParseFromScanner(
    ::tensorflow::strings::Scanner* scanner, bool nested, bool close_curly,
    ::tensorflow::protobuf::Map<string, int32>* map) {
  string map_key;
  bool set_map_key = false;
  int32 map_value;
  bool set_map_value = false;
  std::vector<bool> has_seen(2, false);
  while(true) {
    ProtoSpaceAndComments(scanner);
    if (nested && (scanner->Peek() == (close_curly ? '}' : '>'))) {
      scanner->One(Scanner::ALL);
      ProtoSpaceAndComments(scanner);
      if (!set_map_key || !set_map_value) return false;
      (*map)[map_key] = map_value;
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
    if (identifier == "key") {
      string str_value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseStringLiteralFromScanner(
          scanner, &str_value)) return false;
      SetProtobufStringSwapAllowed(&str_value, &map_key);
      set_map_key = true;
    }
    else if (identifier == "value") {
      int32 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      map_value = (value);
      set_map_value = true;
    }
  }
}

}  // namespace
}  // namespace internal

string ProtoDebugString(
    const ::tensorflow::ConfigProto& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, false);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

string ProtoShortDebugString(
    const ::tensorflow::ConfigProto& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, true);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

namespace internal {

void AppendProtoDebugString(
    ::tensorflow::strings::ProtoTextOutput* o,
    const ::tensorflow::ConfigProto& msg) {
  {
    std::vector<string> keys;
    for (const auto& e : msg.device_count()) keys.push_back(e.first);
    std::stable_sort(keys.begin(), keys.end());
    for (const auto& key : keys) {
      o->OpenNestedMessage("device_count");
      o->AppendString("key", ProtobufStringToString(key));
      o->AppendNumeric("value", msg.device_count().at(key));
      o->CloseNestedMessage();
    }
  }
  o->AppendNumericIfNotZero("intra_op_parallelism_threads", msg.intra_op_parallelism_threads());
  o->AppendNumericIfNotZero("placement_period", msg.placement_period());
  for (int i = 0; i < msg.device_filters_size(); ++i) {
    o->AppendString("device_filters", ProtobufStringToString(msg.device_filters(i)));
  }
  o->AppendNumericIfNotZero("inter_op_parallelism_threads", msg.inter_op_parallelism_threads());
  if (msg.has_gpu_options()) {
    o->OpenNestedMessage("gpu_options");
    ::tensorflow::internal::AppendProtoDebugString(o, msg.gpu_options());
    o->CloseNestedMessage();
  }
  o->AppendBoolIfTrue("allow_soft_placement", msg.allow_soft_placement());
  o->AppendBoolIfTrue("log_device_placement", msg.log_device_placement());
  o->AppendBoolIfTrue("use_per_session_threads", msg.use_per_session_threads());
  if (msg.has_graph_options()) {
    o->OpenNestedMessage("graph_options");
    ::tensorflow::internal::AppendProtoDebugString(o, msg.graph_options());
    o->CloseNestedMessage();
  }
  o->AppendNumericIfNotZero("operation_timeout_in_ms", msg.operation_timeout_in_ms());
  for (int i = 0; i < msg.session_inter_op_thread_pool_size(); ++i) {
    o->OpenNestedMessage("session_inter_op_thread_pool");
    ::tensorflow::internal::AppendProtoDebugString(o, msg.session_inter_op_thread_pool(i));
    o->CloseNestedMessage();
  }
}

}  // namespace internal

bool ProtoParseFromString(
    const string& s,
    ::tensorflow::ConfigProto* msg) {
  msg->Clear();
  Scanner scanner(s);
  if (!internal::ProtoParseFromScanner(&scanner, false, false, msg)) return false;
  scanner.Eos();
  return scanner.GetResult();
}

namespace internal {

bool ProtoParseFromScanner(
    ::tensorflow::strings::Scanner* scanner, bool nested, bool close_curly,
    ::tensorflow::ConfigProto* msg) {
  std::vector<bool> has_seen(12, false);
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
    if (identifier == "device_count") {
      const bool is_list = (scanner->Peek() == '[');
      do {
        if (is_list) {
          scanner->One(Scanner::ALL);
          ProtoSpaceAndComments(scanner);
        }
        const char open_char = scanner->Peek();
        if (open_char != '{' && open_char != '<') return false;
        scanner->One(Scanner::ALL);
        ProtoSpaceAndComments(scanner);
        if (!ProtoParseFromScanner(
            scanner, true, open_char == '{', msg->mutable_device_count())) return false;
      } while (is_list && scanner->Peek() == ',');
      if (is_list && !scanner->OneLiteral("]").GetResult()) return false;
    }
    else if (identifier == "intra_op_parallelism_threads") {
      if (has_seen[1]) return false;
      has_seen[1] = true;
      int32 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_intra_op_parallelism_threads(value);
    }
    else if (identifier == "inter_op_parallelism_threads") {
      if (has_seen[2]) return false;
      has_seen[2] = true;
      int32 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_inter_op_parallelism_threads(value);
    }
    else if (identifier == "use_per_session_threads") {
      if (has_seen[3]) return false;
      has_seen[3] = true;
      bool value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseBoolFromScanner(scanner, &value)) return false;
      msg->set_use_per_session_threads(value);
    }
    else if (identifier == "session_inter_op_thread_pool") {
      const bool is_list = (scanner->Peek() == '[');
      do {
        if (is_list) {
          scanner->One(Scanner::ALL);
          ProtoSpaceAndComments(scanner);
        }
        const char open_char = scanner->Peek();
        if (open_char != '{' && open_char != '<') return false;
        scanner->One(Scanner::ALL);
        ProtoSpaceAndComments(scanner);
        if (!::tensorflow::internal::ProtoParseFromScanner(
            scanner, true, open_char == '{', msg->add_session_inter_op_thread_pool())) return false;
      } while (is_list && scanner->Peek() == ',');
      if (is_list && !scanner->OneLiteral("]").GetResult()) return false;
    }
    else if (identifier == "placement_period") {
      if (has_seen[5]) return false;
      has_seen[5] = true;
      int32 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_placement_period(value);
    }
    else if (identifier == "device_filters") {
      const bool is_list = (scanner->Peek() == '[');
      do {
        if (is_list) {
          scanner->One(Scanner::ALL);
          ProtoSpaceAndComments(scanner);
        }
        string str_value;
        if (!parsed_colon || !::tensorflow::strings::ProtoParseStringLiteralFromScanner(
            scanner, &str_value)) return false;
        SetProtobufStringSwapAllowed(&str_value, msg->add_device_filters());
      } while (is_list && scanner->Peek() == ',');
      if (is_list && !scanner->OneLiteral("]").GetResult()) return false;
    }
    else if (identifier == "gpu_options") {
      if (has_seen[7]) return false;
      has_seen[7] = true;
      const char open_char = scanner->Peek();
      if (open_char != '{' && open_char != '<') return false;
      scanner->One(Scanner::ALL);
      ProtoSpaceAndComments(scanner);
      if (!::tensorflow::internal::ProtoParseFromScanner(
          scanner, true, open_char == '{', msg->mutable_gpu_options())) return false;
    }
    else if (identifier == "allow_soft_placement") {
      if (has_seen[8]) return false;
      has_seen[8] = true;
      bool value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseBoolFromScanner(scanner, &value)) return false;
      msg->set_allow_soft_placement(value);
    }
    else if (identifier == "log_device_placement") {
      if (has_seen[9]) return false;
      has_seen[9] = true;
      bool value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseBoolFromScanner(scanner, &value)) return false;
      msg->set_log_device_placement(value);
    }
    else if (identifier == "graph_options") {
      if (has_seen[10]) return false;
      has_seen[10] = true;
      const char open_char = scanner->Peek();
      if (open_char != '{' && open_char != '<') return false;
      scanner->One(Scanner::ALL);
      ProtoSpaceAndComments(scanner);
      if (!::tensorflow::internal::ProtoParseFromScanner(
          scanner, true, open_char == '{', msg->mutable_graph_options())) return false;
    }
    else if (identifier == "operation_timeout_in_ms") {
      if (has_seen[11]) return false;
      has_seen[11] = true;
      int64 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_operation_timeout_in_ms(value);
    }
  }
}

}  // namespace internal

string ProtoDebugString(
    const ::tensorflow::DebugTensorWatch& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, false);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

string ProtoShortDebugString(
    const ::tensorflow::DebugTensorWatch& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, true);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

namespace internal {

void AppendProtoDebugString(
    ::tensorflow::strings::ProtoTextOutput* o,
    const ::tensorflow::DebugTensorWatch& msg) {
  o->AppendStringIfNotEmpty("node_name", ProtobufStringToString(msg.node_name()));
  o->AppendNumericIfNotZero("output_slot", msg.output_slot());
  for (int i = 0; i < msg.debug_ops_size(); ++i) {
    o->AppendString("debug_ops", ProtobufStringToString(msg.debug_ops(i)));
  }
  for (int i = 0; i < msg.debug_urls_size(); ++i) {
    o->AppendString("debug_urls", ProtobufStringToString(msg.debug_urls(i)));
  }
}

}  // namespace internal

bool ProtoParseFromString(
    const string& s,
    ::tensorflow::DebugTensorWatch* msg) {
  msg->Clear();
  Scanner scanner(s);
  if (!internal::ProtoParseFromScanner(&scanner, false, false, msg)) return false;
  scanner.Eos();
  return scanner.GetResult();
}

namespace internal {

bool ProtoParseFromScanner(
    ::tensorflow::strings::Scanner* scanner, bool nested, bool close_curly,
    ::tensorflow::DebugTensorWatch* msg) {
  std::vector<bool> has_seen(4, false);
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
    if (identifier == "node_name") {
      if (has_seen[0]) return false;
      has_seen[0] = true;
      string str_value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseStringLiteralFromScanner(
          scanner, &str_value)) return false;
      SetProtobufStringSwapAllowed(&str_value, msg->mutable_node_name());
    }
    else if (identifier == "output_slot") {
      if (has_seen[1]) return false;
      has_seen[1] = true;
      int32 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_output_slot(value);
    }
    else if (identifier == "debug_ops") {
      const bool is_list = (scanner->Peek() == '[');
      do {
        if (is_list) {
          scanner->One(Scanner::ALL);
          ProtoSpaceAndComments(scanner);
        }
        string str_value;
        if (!parsed_colon || !::tensorflow::strings::ProtoParseStringLiteralFromScanner(
            scanner, &str_value)) return false;
        SetProtobufStringSwapAllowed(&str_value, msg->add_debug_ops());
      } while (is_list && scanner->Peek() == ',');
      if (is_list && !scanner->OneLiteral("]").GetResult()) return false;
    }
    else if (identifier == "debug_urls") {
      const bool is_list = (scanner->Peek() == '[');
      do {
        if (is_list) {
          scanner->One(Scanner::ALL);
          ProtoSpaceAndComments(scanner);
        }
        string str_value;
        if (!parsed_colon || !::tensorflow::strings::ProtoParseStringLiteralFromScanner(
            scanner, &str_value)) return false;
        SetProtobufStringSwapAllowed(&str_value, msg->add_debug_urls());
      } while (is_list && scanner->Peek() == ',');
      if (is_list && !scanner->OneLiteral("]").GetResult()) return false;
    }
  }
}

}  // namespace internal

const char* EnumName_RunOptions_TraceLevel(
    ::tensorflow::RunOptions_TraceLevel value) {
  switch (value) {
    case 0: return "NO_TRACE";
    case 1: return "SOFTWARE_TRACE";
    case 2: return "HARDWARE_TRACE";
    case 3: return "FULL_TRACE";
    default: return "";
  }
}

string ProtoDebugString(
    const ::tensorflow::RunOptions& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, false);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

string ProtoShortDebugString(
    const ::tensorflow::RunOptions& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, true);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

namespace internal {

void AppendProtoDebugString(
    ::tensorflow::strings::ProtoTextOutput* o,
    const ::tensorflow::RunOptions& msg) {
  if (msg.trace_level() != 0) {
    o->AppendEnumName("trace_level", ::tensorflow::EnumName_RunOptions_TraceLevel(msg.trace_level()));
  }
  o->AppendNumericIfNotZero("timeout_in_ms", msg.timeout_in_ms());
  o->AppendNumericIfNotZero("inter_op_thread_pool", msg.inter_op_thread_pool());
  for (int i = 0; i < msg.debug_tensor_watch_opts_size(); ++i) {
    o->OpenNestedMessage("debug_tensor_watch_opts");
    ::tensorflow::internal::AppendProtoDebugString(o, msg.debug_tensor_watch_opts(i));
    o->CloseNestedMessage();
  }
}

}  // namespace internal

bool ProtoParseFromString(
    const string& s,
    ::tensorflow::RunOptions* msg) {
  msg->Clear();
  Scanner scanner(s);
  if (!internal::ProtoParseFromScanner(&scanner, false, false, msg)) return false;
  scanner.Eos();
  return scanner.GetResult();
}

namespace internal {

bool ProtoParseFromScanner(
    ::tensorflow::strings::Scanner* scanner, bool nested, bool close_curly,
    ::tensorflow::RunOptions* msg) {
  std::vector<bool> has_seen(4, false);
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
    if (identifier == "trace_level") {
      if (has_seen[0]) return false;
      has_seen[0] = true;
      StringPiece value;
      if (!parsed_colon || !scanner->RestartCapture().Many(Scanner::LETTER_DIGIT_DASH_UNDERSCORE).GetResult(nullptr, &value)) return false;
      if (value == "NO_TRACE" || value == "0" || value == "-0") {
        msg->set_trace_level(::tensorflow::RunOptions_TraceLevel_NO_TRACE);
      } else if (value == "SOFTWARE_TRACE" || value == "1") {
        msg->set_trace_level(::tensorflow::RunOptions_TraceLevel_SOFTWARE_TRACE);
      } else if (value == "HARDWARE_TRACE" || value == "2") {
        msg->set_trace_level(::tensorflow::RunOptions_TraceLevel_HARDWARE_TRACE);
      } else if (value == "FULL_TRACE" || value == "3") {
        msg->set_trace_level(::tensorflow::RunOptions_TraceLevel_FULL_TRACE);
      } else {
        return false;
      }
    }
    else if (identifier == "timeout_in_ms") {
      if (has_seen[1]) return false;
      has_seen[1] = true;
      int64 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_timeout_in_ms(value);
    }
    else if (identifier == "inter_op_thread_pool") {
      if (has_seen[2]) return false;
      has_seen[2] = true;
      int32 value;
      if (!parsed_colon || !::tensorflow::strings::ProtoParseNumericFromScanner(scanner, &value)) return false;
      msg->set_inter_op_thread_pool(value);
    }
    else if (identifier == "debug_tensor_watch_opts") {
      const bool is_list = (scanner->Peek() == '[');
      do {
        if (is_list) {
          scanner->One(Scanner::ALL);
          ProtoSpaceAndComments(scanner);
        }
        const char open_char = scanner->Peek();
        if (open_char != '{' && open_char != '<') return false;
        scanner->One(Scanner::ALL);
        ProtoSpaceAndComments(scanner);
        if (!::tensorflow::internal::ProtoParseFromScanner(
            scanner, true, open_char == '{', msg->add_debug_tensor_watch_opts())) return false;
      } while (is_list && scanner->Peek() == ',');
      if (is_list && !scanner->OneLiteral("]").GetResult()) return false;
    }
  }
}

}  // namespace internal

string ProtoDebugString(
    const ::tensorflow::RunMetadata& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, false);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

string ProtoShortDebugString(
    const ::tensorflow::RunMetadata& msg) {
  string s;
  ::tensorflow::strings::ProtoTextOutput o(&s, true);
  internal::AppendProtoDebugString(&o, msg);
  o.CloseTopMessage();
  return s;
}

namespace internal {

void AppendProtoDebugString(
    ::tensorflow::strings::ProtoTextOutput* o,
    const ::tensorflow::RunMetadata& msg) {
  if (msg.has_step_stats()) {
    o->OpenNestedMessage("step_stats");
    ::tensorflow::internal::AppendProtoDebugString(o, msg.step_stats());
    o->CloseNestedMessage();
  }
  if (msg.has_cost_graph()) {
    o->OpenNestedMessage("cost_graph");
    ::tensorflow::internal::AppendProtoDebugString(o, msg.cost_graph());
    o->CloseNestedMessage();
  }
}

}  // namespace internal

bool ProtoParseFromString(
    const string& s,
    ::tensorflow::RunMetadata* msg) {
  msg->Clear();
  Scanner scanner(s);
  if (!internal::ProtoParseFromScanner(&scanner, false, false, msg)) return false;
  scanner.Eos();
  return scanner.GetResult();
}

namespace internal {

bool ProtoParseFromScanner(
    ::tensorflow::strings::Scanner* scanner, bool nested, bool close_curly,
    ::tensorflow::RunMetadata* msg) {
  std::vector<bool> has_seen(2, false);
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
    if (identifier == "step_stats") {
      if (has_seen[0]) return false;
      has_seen[0] = true;
      const char open_char = scanner->Peek();
      if (open_char != '{' && open_char != '<') return false;
      scanner->One(Scanner::ALL);
      ProtoSpaceAndComments(scanner);
      if (!::tensorflow::internal::ProtoParseFromScanner(
          scanner, true, open_char == '{', msg->mutable_step_stats())) return false;
    }
    else if (identifier == "cost_graph") {
      if (has_seen[1]) return false;
      has_seen[1] = true;
      const char open_char = scanner->Peek();
      if (open_char != '{' && open_char != '<') return false;
      scanner->One(Scanner::ALL);
      ProtoSpaceAndComments(scanner);
      if (!::tensorflow::internal::ProtoParseFromScanner(
          scanner, true, open_char == '{', msg->mutable_cost_graph())) return false;
    }
  }
}

}  // namespace internal

}  // namespace tensorflow
