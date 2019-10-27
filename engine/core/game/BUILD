package(default_visibility = ["//visibility:public"])

load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")
load("@rules_proto//proto:defs.bzl", "proto_library")

cc_library(
  name = "game_app"
  srcs = ["game_app.cc"],
  hdrs = [
    "game_app.h",
    "//engine/core/updatable_instance",
    "//engine/core:status",
  ]
)

cc_test(
  name = "game_app_test"
  srcs = ["game_app_test.cc"],
  deps = [":game_app"]
)