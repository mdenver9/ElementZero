// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_COMMAND_MOD_PROTO_H_
#define FLATBUFFERS_GENERATED_COMMAND_MOD_PROTO_H_

#include "flatbuffers/flatbuffers.h"

namespace Mod {
namespace proto {

struct CommandRequst;
struct CommandRequstBuilder;
struct CommandRequstT;

struct CommandResponse;
struct CommandResponseBuilder;
struct CommandResponseT;

struct CommandRequstT : public flatbuffers::NativeTable {
  typedef CommandRequst TableType;
  std::string name;
  std::string command;
  CommandRequstT() {
  }
};

struct CommandRequst FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef CommandRequstT NativeTableType;
  typedef CommandRequstBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_COMMAND = 6
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::String *command() const {
    return GetPointer<const flatbuffers::String *>(VT_COMMAND);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_COMMAND) &&
           verifier.VerifyString(command()) &&
           verifier.EndTable();
  }
  CommandRequstT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(CommandRequstT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<CommandRequst> Pack(flatbuffers::FlatBufferBuilder &_fbb, const CommandRequstT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct CommandRequstBuilder {
  typedef CommandRequst Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(CommandRequst::VT_NAME, name);
  }
  void add_command(flatbuffers::Offset<flatbuffers::String> command) {
    fbb_.AddOffset(CommandRequst::VT_COMMAND, command);
  }
  explicit CommandRequstBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  CommandRequstBuilder &operator=(const CommandRequstBuilder &);
  flatbuffers::Offset<CommandRequst> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<CommandRequst>(end);
    return o;
  }
};

inline flatbuffers::Offset<CommandRequst> CreateCommandRequst(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::String> command = 0) {
  CommandRequstBuilder builder_(_fbb);
  builder_.add_command(command);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<CommandRequst> CreateCommandRequstDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const char *command = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto command__ = command ? _fbb.CreateString(command) : 0;
  return Mod::proto::CreateCommandRequst(
      _fbb,
      name__,
      command__);
}

flatbuffers::Offset<CommandRequst> CreateCommandRequst(flatbuffers::FlatBufferBuilder &_fbb, const CommandRequstT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct CommandResponseT : public flatbuffers::NativeTable {
  typedef CommandResponse TableType;
  std::string message;
  std::string extra;
  CommandResponseT() {
  }
};

struct CommandResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef CommandResponseT NativeTableType;
  typedef CommandResponseBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MESSAGE = 4,
    VT_EXTRA = 6
  };
  const flatbuffers::String *message() const {
    return GetPointer<const flatbuffers::String *>(VT_MESSAGE);
  }
  const flatbuffers::String *extra() const {
    return GetPointer<const flatbuffers::String *>(VT_EXTRA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_MESSAGE) &&
           verifier.VerifyString(message()) &&
           VerifyOffset(verifier, VT_EXTRA) &&
           verifier.VerifyString(extra()) &&
           verifier.EndTable();
  }
  CommandResponseT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(CommandResponseT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<CommandResponse> Pack(flatbuffers::FlatBufferBuilder &_fbb, const CommandResponseT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct CommandResponseBuilder {
  typedef CommandResponse Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_message(flatbuffers::Offset<flatbuffers::String> message) {
    fbb_.AddOffset(CommandResponse::VT_MESSAGE, message);
  }
  void add_extra(flatbuffers::Offset<flatbuffers::String> extra) {
    fbb_.AddOffset(CommandResponse::VT_EXTRA, extra);
  }
  explicit CommandResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  CommandResponseBuilder &operator=(const CommandResponseBuilder &);
  flatbuffers::Offset<CommandResponse> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<CommandResponse>(end);
    return o;
  }
};

inline flatbuffers::Offset<CommandResponse> CreateCommandResponse(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> message = 0,
    flatbuffers::Offset<flatbuffers::String> extra = 0) {
  CommandResponseBuilder builder_(_fbb);
  builder_.add_extra(extra);
  builder_.add_message(message);
  return builder_.Finish();
}

inline flatbuffers::Offset<CommandResponse> CreateCommandResponseDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *message = nullptr,
    const char *extra = nullptr) {
  auto message__ = message ? _fbb.CreateString(message) : 0;
  auto extra__ = extra ? _fbb.CreateString(extra) : 0;
  return Mod::proto::CreateCommandResponse(
      _fbb,
      message__,
      extra__);
}

flatbuffers::Offset<CommandResponse> CreateCommandResponse(flatbuffers::FlatBufferBuilder &_fbb, const CommandResponseT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline CommandRequstT *CommandRequst::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<Mod::proto::CommandRequstT> _o = std::unique_ptr<Mod::proto::CommandRequstT>(new CommandRequstT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void CommandRequst::UnPackTo(CommandRequstT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = name(); if (_e) _o->name = _e->str(); }
  { auto _e = command(); if (_e) _o->command = _e->str(); }
}

inline flatbuffers::Offset<CommandRequst> CommandRequst::Pack(flatbuffers::FlatBufferBuilder &_fbb, const CommandRequstT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateCommandRequst(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<CommandRequst> CreateCommandRequst(flatbuffers::FlatBufferBuilder &_fbb, const CommandRequstT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CommandRequstT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _name = _o->name.empty() ? 0 : _fbb.CreateString(_o->name);
  auto _command = _o->command.empty() ? 0 : _fbb.CreateString(_o->command);
  return Mod::proto::CreateCommandRequst(
      _fbb,
      _name,
      _command);
}

inline CommandResponseT *CommandResponse::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  std::unique_ptr<Mod::proto::CommandResponseT> _o = std::unique_ptr<Mod::proto::CommandResponseT>(new CommandResponseT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void CommandResponse::UnPackTo(CommandResponseT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = message(); if (_e) _o->message = _e->str(); }
  { auto _e = extra(); if (_e) _o->extra = _e->str(); }
}

inline flatbuffers::Offset<CommandResponse> CommandResponse::Pack(flatbuffers::FlatBufferBuilder &_fbb, const CommandResponseT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateCommandResponse(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<CommandResponse> CreateCommandResponse(flatbuffers::FlatBufferBuilder &_fbb, const CommandResponseT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CommandResponseT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _message = _o->message.empty() ? 0 : _fbb.CreateString(_o->message);
  auto _extra = _o->extra.empty() ? 0 : _fbb.CreateString(_o->extra);
  return Mod::proto::CreateCommandResponse(
      _fbb,
      _message,
      _extra);
}

}  // namespace proto
}  // namespace Mod

#endif  // FLATBUFFERS_GENERATED_COMMAND_MOD_PROTO_H_