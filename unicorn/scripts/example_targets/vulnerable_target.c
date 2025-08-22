#include <stdio.h>
#include <string.h>

int check_password(char *input) {
    char buffer[32];

    strcpy(buffer, input);  // Vulnerable if input > 31 bytes

    if (strcmp(buffer, "password") == 0) {
        return 1;
    }

    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return -1;
    }

    int result = check_password(argv[1]);

    if (result) {
        return 0;
    } else {
        return -1;
    }
}
