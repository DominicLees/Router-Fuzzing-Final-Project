#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/*
    A simple easy to crash program to test a fuzzer is working
*/
int main(int argc, char* argv[]) {
    char str[10];
    read(STDIN_FILENO, str, 100); // AFL only passes in data via stdin
    printf("%s", str);
    return 0;
}