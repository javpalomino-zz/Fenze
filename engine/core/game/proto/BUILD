package(default_visibility = ["//visibility:public"])

load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

proto_library(
  name = "game_params_proto",
  srcs = ["game_params.proto"],
  deps = ["//engine/graphics/proto:renderer_params_proto"],
)

cc_proto_library(
  name = "game_params_cc_proto",
  deps = ["game_params_proto"],
)