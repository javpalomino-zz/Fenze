#ifndef ENGINE_CORE_STATUS_OR_VALUE_H__
#define ENGINE_CORE_STATUS_OR_VALUE_H__

#include <string>

namespace engine {
namespace core {

template <class T>
class StatusOrValue {
public:
  StatusOrValue<T>() {
    error_ = false;
  }
  const T& Value() {
    return value_;
  }
  void SetValue(const T& value) {
    value_ = value;
    SetError("", false);
  }
  void SetError(const std::string& error_message) {
    SetError(error_message, true);
  }
  const std::string& GetErrorMessage() {
    return message_;
  }
  bool error() {
    return error_;
  }
  bool success() {
    return !error_;
  }
private:
  T value_;
  bool error_;
  std::string message_;
  void SetError(const std::string& error_message, bool error) {
    message_ = error_message;
    error_ = error;
  }
};

}
}

#endif