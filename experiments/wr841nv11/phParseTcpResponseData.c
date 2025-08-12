// Runs the decompiled the first part of the phPharseTcpResponseData function from the httpd binary
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char* arg1 = "  hello";
    int arg2 = strlen(arg1);

    char* arg1_end = &arg1[arg2];
    char* arg1_start = arg1;
    
    int i;
    // removes starting whitespace
    while (1) {
        i = arg1_end - arg1_start;
        if (arg1_start >= arg1_end) break;
        i = arg1_end - arg1_start;
        if (*arg1_start != ' ') break;
        arg1_start = &arg1_start[1];
    }

    printf("%s\ni: %d\n", arg1_start, i);
    return 0;
}