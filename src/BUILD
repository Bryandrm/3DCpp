# Copyright 2020 - Kevin Rivera @kevinrev26

# Binary file
cc_binary(
    name = "3DCpp",
    srcs = ["3DCpp.cpp"],
    deps = [
        "@glm-lib//:glm",
    ],
    linkopts = [
        "-lGL",
        "-lglut",
        "-lGLU",
        "-lm",
        "-lGLEW",
        "-lsfml-graphics",
        "-lsfml-window", 
        "-lsfml-system",
    ],
    data = [
        "//Assets:images"
    ]
)