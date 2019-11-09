package(default_visibility = ["//visibility:public"])

load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")
load("@rules_proto//proto:defs.bzl", "proto_library")

cc_library(
  name = "game_app",
  srcs = ["game_app.cc"],
  hdrs = ["game_app.h"],
  deps = [
    "//engine/core:updatable_instance",
    "//engine/core:status",
    "//engine/core:status_or_value",
    "//engine/core/game/proto:game_params_cc_proto",
    "//engine/debug:debug",
    "//engine/graphics:renderer",
  ],
)

cc_test(
  name = "game_app_test",
  srcs = ["game_app_test.cc"],
  deps = [":game_app"]
)