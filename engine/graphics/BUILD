package(default_visibility = ["//visibility:public"])

load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

cc_library(
  name = "renderer",
  srcs = ["renderer.cc"],
  hdrs = ["renderer.h"],
  deps = [
    "@sdl2//:sdl2",
    "//engine/debug:debug",
    "//engine/core:status",
    "//engine/core:status_or_value",
    "//engine/graphics/proto:renderer_params_cc_proto",
    "//engine/graphics/proto:window_params_cc_proto",
  ],
)