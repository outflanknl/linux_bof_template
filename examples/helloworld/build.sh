#!/bin/sh

x86_64-linux-gnu-gcc -c -FPIC hello.c -o hello.x64.o || echo "[!] x86_64 compiler not found, skipping"
aarch64-linux-gnu-gcc -c -FPIC hello.c -o hello.arm64.o || echo "[!] ARM64 compiler not found, skipping"
