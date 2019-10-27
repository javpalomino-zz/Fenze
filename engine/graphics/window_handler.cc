#include "engine/graphics/window_handler.h"

namespace engine {
namespace core {
namespace graphics {

void
WindowHanlder::CreateWindow(std::string window_title, int width, int height) {
  // TODO(javier) - we should add a validation for the size of the screen
  // Maybe having an enum would help here ? - So, instead of having to set those
  // numbers we can provide in the API a set of valid w X h. This will also
  // allow us to let the play to pick the desired configuration
  sdl_window_ = SDL_CreateWindow(
    /**/window_title, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
}

void WindowHanlder::DestroyWindow() {
  // A nullptr check is not needed. If sdl_window_ == nullptr this won't fail 
  SDL_DestroyWindow(sdl_window_);
}

}
}
}