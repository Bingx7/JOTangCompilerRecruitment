#! /usr/bin/bash
set -euo pipefail

if [ $# -ne 1 ]; then
    echo "用法: $0 <file.c>"
    exit 1
fi

src="$1"
base="${src%.c}"     # 去掉 .c 后缀作为基名

gcc -E "$src"      -o "$base.i"
gcc -S "$base.i"   -o "$base.s"
gcc -c "$base.s"   -o "$base.o"

echo "生成: $base.i  $base.s  $base.o"
