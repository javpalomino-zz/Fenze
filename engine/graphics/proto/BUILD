package(default_visibility = ["//visibility:public"])

load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

proto_library(
  name = "renderer_params_proto",
  srcs = ["renderer_params.proto"],
  deps = [":window_params_proto"],
)

cc_proto_library(
  name = "renderer_params_cc_proto",
  deps = [":renderer_params_proto"],
)

proto_library(
  name = "color_proto",
  srcs = ["color.proto"],
  deps = [":window_proto"],
)

cc_proto_library(
  name = "color_cc_proto",
  deps = [":color_proto"],
)

proto_library(
  name = "window_params_proto",
  srcs = ["window_params.proto"]
)

cc_proto_library(
  name = "window_params_cc_proto",
  deps = [":window_params_proto"],
)