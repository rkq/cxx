workspace(name = "cxx")

# googletest
new_http_archive(
    name = "gtest",
    url = "https://github.com/google/googletest/archive/release-1.8.1.zip",
    sha256 = "927827c183d01734cc5cfef85e0ff3f5a92ffe6188e0d18e909c5efebf28a0c7",
    build_file = "third_party/gtest.BUILD",
    strip_prefix = "googletest-release-1.8.1",
)

# gflags
http_archive(
    name = "gflags",
    url = "https://github.com/gflags/gflags/archive/v2.2.1.zip",
    sha256 = "4e44b69e709c826734dbbbd5208f61888a2faf63f239d73d8ba0011b2dccc97a",
    strip_prefix = "gflags-2.2.1",
)

# glog
new_git_repository(
    name = "glog",
    remote = "git://github.com/google/glog.git",
    commit = "8d7a107d68c127f3f494bb7807b796c8c5a97a82",
    build_file = "third_party/glog.BUILD",
)

# boost (header only)
new_http_archive(
    name = "boost",
    url = "https://dl.bintray.com/boostorg/release/1.68.0/source/boost_1_68_0.tar.gz",
    sha256 = "da3411ea45622579d419bfda66f45cd0f8c32a181d84adfa936f5688388995cf",
    build_file = "third_party/boost.BUILD",
    strip_prefix = "boost_1_68_0",
)
