#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>

// Simply program that can currently run another program and get its return status
int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Incorrect number of arguments");
        return 1;
    }

    int fork_id = fork();
    if (fork_id < 0) {
        perror("fork error");
        return 1;
    // Child fork
    } else if (fork_id == 0) {
        char *args[argc];
        for (size_t i = 0; i < argc - 1; i++) {
            args[i] = argv[i + 1];
        }
        args[argc - 1] = '\0';
        
        if (execv(argv[1], args) < 0) {
            perror("execv error");
            return -1;
        }
    // Parent fork
    } else {
        int stat_loc;
        if (waitpid(fork_id, &stat_loc, 0) < 0) {
            perror("wait error");
            return 1;
        }
        int status = WEXITSTATUS(stat_loc);
        printf("\nExit status: %d", status);
    }
    return 0;
}