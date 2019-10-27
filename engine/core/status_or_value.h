#ifndef ENGINE_CORE_STATUS_OR_VALUE_H__
#define ENGINE_CORE_STATUS_OR_VALUE_H__

#include <string>

#include "engine/core/status.h"

namespace engine {
namespace core {

template <class T>
class StatusOrValue {
public:
  StatusOrValue<T>() {
    status_.SetError("");
  }
  const T& Value() {
    return value_;
  }
  void SetValue(const T& value) {
    value_ = value;
    status_.SetSuccess();
  }
  void SetError(const std::string& error_message) {
    status_.SetError(error_message);
  }
  const std::string& GetErrorMessage() {
    return status_.GetErrorMessage();
  }
  bool error() {
    return status_.error();
  }
  bool success() {
    return status_.success();
  }
private:
  T value_;
  Status status_;
};

}
}

#endif