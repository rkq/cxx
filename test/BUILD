licenses(['notice'])

cc_test(
    name = "greeting_test",
    srcs = ["greeting_test.cc"],
    copts = ["-Iexternal/googletest/googletest/include"],
    deps = [
        "@gtest//:gtest_main",
        "//src:greeting",
    ],
    linkstatic = True,
)