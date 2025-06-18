#include <stdlib.h>
#include <stdio.h>

// Simply program that prints the first argument with code that has a format string vulnerability 
int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("No message supplied\n");
        return 1;
    }

    int code = printf(argv[1]);
    if (code < 0) return 1;
    return 0;
}