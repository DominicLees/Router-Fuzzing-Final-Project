#include <stdio.h>

int str_len(char* str) {
    int len = 0;
    while (str[len] != '\00') {
        len += 1;
    }
    return len;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return -1;
    printf("%s is %d characters long\n", argv[1], str_len(argv[1]));
    return 0;
}