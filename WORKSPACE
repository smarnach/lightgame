workspace(name = "tknet")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name = "bazel_rules_qt",
    remote = "https://github.com/justbuchanan/bazel_rules_qt.git",
    branch = "master",
)

new_local_repository(
    name = "qt",
    build_file = "@bazel_rules_qt//:qt.BUILD",
    path = "/usr/include/x86_64-linux-gnu/qt5/"
)