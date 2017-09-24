cc_library(
    name = "main",
    srcs = [],
    hdrs = [
        "average-score.h",
        "count-lines.h",
        "trim.h"
    ],
)

cc_test(
    name = "test",
    srcs = ["test.cpp"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@gtest//:main",
        "//ch02:main",
    ],
)
