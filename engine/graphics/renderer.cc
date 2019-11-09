#include "engine/graphics/renderer.h"

#include <memory>
#include <SDL.h>

#include "engine/core/status.h"
#include "engine/core/status_or_value.h"
#include "engine/debug/debug.h"

namespace engine {
namespace graphics {
namespace {
using ::engine::core::Status;
using ::engine::core::StatusOrValue;
using ::engine::graphics::proto::RendererParams;
using ::engine::graphics::proto::WindowParams;

StatusOrValue<SDL_Window*> CreateWindow(const WindowParams& params) {
  StatusOrValue<SDL_Window*> status;

  auto* sdl_window = SDL_CreateWindow(
    params.title().c_str(),
    SDL_WINDOWPOS_UNDEFINED,
    SDL_WINDOWPOS_UNDEFINED,
    params.width(),
    params.height(),
    SDL_WINDOW_SHOWN
  );

  if (sdl_window == nullptr) {
    DEBUG("sdl_window nullptr");
    status.SetError("Failed to create Window");
    return status;
  }

  status.SetValue(sdl_window);

  return status;
}

const StatusOrValue<SDL_Renderer*> CreateRenderer(
  const RendererParams& params,
  SDL_Window* sdl_window) {
  StatusOrValue<SDL_Renderer*> status;

  auto* sdl_renderer = SDL_CreateRenderer( sdl_window, -1, 0 );

  if (sdl_renderer == nullptr) {
    DEBUG("sdl_renderer nullptr");
    status.SetError("Failed to create Renderer");
  }
  DEBUG("CreateRenderer: status has no error");
  return std::move(status);
}

}  //  namespace

Renderer::Renderer() {

}

const Status Renderer::Init(const RendererParams& params) {
  Status status;
  auto window_status = CreateWindow(params.window());
  
  if (window_status.error()) {
    return window_status.status();
  }

  sdl_window_ = window_status.Value();

  const auto renderer_status = CreateRenderer(params, sdl_window_);

  if (renderer_status.error()) {
    DEBUG("renderer_status has error !!");
    return renderer_status.status();
  }

  sdl_renderer_ = renderer_status.Value();

  return std::move(status);
}

Renderer::~Renderer() {
  
}

}  //  namespace graphics
}  //  namespace engine