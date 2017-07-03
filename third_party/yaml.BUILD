# YAML for C++

# TODO(breakds): Should add boost library as a dependency for this to build.

cc_library(
    name = "yaml",
    visibility = [
        "//visibility:public"
    ],
    hdrs = glob([
        "include/yaml-cpp/*.h",
        "src/*.h",
    ]),
    srcs = glob([
        "src/*.cpp",
    ]),
    includes = [
        "include",
        "src",
    ],
)
