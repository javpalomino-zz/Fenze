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
    status_.SetSuccess();
  }
  const T& Value() const {
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
  const bool& error() const {
    return status_.error();
  }
  const bool success() {
    return status_.success();
  }
  const Status& status() const {
    return status_;
  }
private:
  T value_;
  Status status_;
};

}  //  namespace core
}  //  namespace engine

#endif