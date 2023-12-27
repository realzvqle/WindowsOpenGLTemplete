#pragma once



#include <stdio.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <windows.h>
#include <time.h>
#include <math.h>

#define fail(message, ...) printf("[-] " message, ##__VA_ARGS__)
#define pass(message, ...) printf("[+] " message, ##__VA_ARGS__)
#define info(message, ...) printf("[!] " message, ##__VA_ARGS__)




typedef struct {
    int x;
    int y;
    GLFWwindow* window;
} window;


typedef struct {
    float x;
    float y;
    float z;
} vec3;