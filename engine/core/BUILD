package(default_visibility = ["//visibility:public"])

load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")
load("@rules_proto//proto:defs.bzl", "proto_library")


cc_library (
  name = "updatable_instance",
  hdrs = ["updatable_instance.h"],
  deps = [":status"],
)

cc_library(
  name = "status_or_value",
  hdrs = ["status_or_value.h"],
  deps = [
    ":status",
  ],
)

cc_test(
  name = "status_or_value_test",
  srcs = ["status_or_value_test.cc"],
  deps = [
    ":status_or_value",
    "@gtest//:gtest",
    "@gtest//:gtest_main",
  ]
)

cc_library(
  name = "status",
  hdrs = ["status.h"]
)

cc_test(
  name = "status_test",
  srcs = ["status_test.cc"],
  deps = [
    ":status",
    "@gtest//:gtest",
    "@gtest//:gtest_main",
  ]
)