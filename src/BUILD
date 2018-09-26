# Description

cc_binary(
    name = "hello",
    srcs = [ "hello.cc",
    ],
    deps = ["@glog//:glog",
            "@gflags//:gflags",
    ],
    linkstatic = True,
)

cc_library(
    name = "greeting",
    srcs = [ "greeting.cc",
    ],
    hdrs = [ "greeting.h",
    ],
    visibility = ["//visibility:public"],
)