@echo off


gcc -g -std=c17 -I./include -L./lib ./src/*.c -lglfw3dll -o main.exe
start main
