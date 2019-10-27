
workspace(name = "javicho_code")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_google_protobuf",
    sha256 = "33cba8b89be6c81b1461f1c438424f7a1aa4e31998dbe9ed6f8319583daac8c7",
    strip_prefix = "protobuf-3.10.0",
    urls = ["https://github.com/protocolbuffers/protobuf/archive/v3.10.0.zip"],
)

http_archive(
    name = "com_google_protobuf_javalite",
    strip_prefix = "protobuf-javalite",
    urls = ["https://github.com/protocolbuffers/protobuf/archive/javalite.zip"],
)

http_archive(
    name = "gtest",
    sha256 = "94c634d499558a76fa649edb13721dce6e98fb1e7018dfaeba3cd7a083945e91",
    strip_prefix = "googletest-release-1.10.0",
    urls = ["https://github.com/google/googletest/archive/release-1.10.0.zip"],
)


http_archive(
    name = "sdl2",
    build_file = "sdl2.BUILD",
    sha256 = "e6a7c71154c3001e318ba7ed4b98582de72ff970aca05abc9f45f7cbdc9088cb",
    strip_prefix = "SDL2-2.0.8",
    urls = ["https://www.libsdl.org/release/SDL2-2.0.8.zip"],
)

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")
protobuf_deps()