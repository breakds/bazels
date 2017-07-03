# Lua

# TODO(breakds): Paste in your generated luaconf.

genrule(
    name = "luaconf",
    outs = ["luaconf.h"],
    cmd = """
cat > $@ <<"EOF"
EOF"""
)

cc_library(
    name = "lua",
    visibility = ["//visibility:public"],
    hdrs = glob([
        "src/*.h",
    ]) + [":luaconf"],
    srcs = glob([
        "src/*.c",
    ], exclude = [
        "src/wmain.c",
        "src/luac.c",
        "src/lua.c",
        "src/loadlib_rel.c",
    ]),
    linkopts = [
        "-ldl",
    ],
    includes = [
        "src",
    ],
)
