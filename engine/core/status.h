#ifndef ENGINE_CORE_STATUS_H__
#define ENGINE_CORE_STATUS_H__

#include <string>

namespace engine {
namespace core {

class Status {
public:
  Status() {
    SetSuccess();
  }
  void SetSuccess() {
    error_ = false;
    message_ = "";
  }
  void SetError(const std::string& error_message) {
    message_ = error_message;
    error_ = true;
  }
  const std::string GetErrorMessage() const {
    return message_;
  }
  const bool& error() const {
    return error_;
  }
  const bool success() {
    return !error_;
  }
private:
  bool error_;
  std::string message_;
};

}  //  namespace core
}  //  namespace engine

#endif