load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "lib1",
    srcs = ["lib1.cc"],
    hdrs = ["lib1.h"],
)

cc_binary(
    name = "example2",
    srcs = ["main.cc"],
    deps = [
        ":lib1",
    ],
)
