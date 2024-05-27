/*
 * This is a simple Hello World in C++.
 * Note the header structure and files.
 * The only thing included here is main.h
 * main.h contains all other directives
 */

/* 
 * File:   main.cpp
 * Author: Jonathan Hernandez
 */

#include "main.h"

void printHello() {
    std::cout << "Hello, World!" << std::endl;
}

int main(int argc, char** argv) {
    printHello();
    return 0;
}
