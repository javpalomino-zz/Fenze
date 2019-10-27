package(default_visibility = ["//visibility:public"])

load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

cc_library(
  name = "window_handler",
  srcs = ["window_handler.cc"],
  hdrs = ["window_handler.h"],
  deps = [
    "@sdl2//:sdl2",
    "window_cc_proto"
  ]
)

cc_test(
  name = "window_handler_test",
  srcs = ["window_handler_test.cc"],
  deps = [
    ":window_handler",
    "@sdl2//:sdl2",
    "@gtest//:gtest",
    "@gtest//:gtest_main",
  ]
)

proto_library(
  name = "window_proto",
  srcs = ["window.proto"]
)

cc_proto_library(
  name = "window_cc_proto",
  deps = [
    ":window_proto"
  ]
)