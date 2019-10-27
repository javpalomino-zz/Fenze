load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_proto_library", "cc_test")
load("@rules_proto//proto:defs.bzl", "proto_library")

cc_binary(
  name = "fenze",
  srcs = ["main.cc"],
  deps = [
    "@sdl2//:sdl2",
  "config_cc_proto"
  ]
)

proto_library(
  name = "config_proto",
  srcs = ["config.proto"],
)

cc_proto_library(
  name = "config_cc_proto",
  deps = [":config_proto"]
)

cc_test(
  name = "dummy_test",
  srcs = ["dummy_test.cc"],
  deps = [
    "@gtest//:gtest",
    "@gtest//:gtest_main",
    ":config_cc_proto"
  ]
)