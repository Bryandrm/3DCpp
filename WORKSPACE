# Copyright 2020 - Kevin Rivera @kevinrev26

# Http archive tool
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Git repository
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

http_archive(
    name = "glm-lib",
    url = "https://github.com/g-truc/glm/releases/download/0.9.9.7/glm-0.9.9.7.zip",
    sha256 = "6b79c3d06d9745d1cce3f38c0c15666596f9aefff25ddb74df3af0a02f011ee1",
    build_file = "@//external:BUILD.glm"
)

