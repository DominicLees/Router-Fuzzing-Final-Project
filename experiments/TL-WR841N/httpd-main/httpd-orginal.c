#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

/* 
    A recreation of the main function from the httpd binary from the TL-WR841N router
    Takes the path to the web server files as an argument
*/
int main (int argc, char* argv[]) {
    char* g_http_rootDir;    
    if (argc == 1)
        g_http_rootDir = "/web/";
    else
        g_http_rootDir = argv[1];

    char* http_rootDir_1 = g_http_rootDir;
    size_t http_rootDir_length = strlen(http_rootDir_1);

    if (http_rootDir_length >= 33) {
        printf("root dir too long");
        return 1;
    }

    if (*(http_rootDir_1 + http_rootDir_length - 1) != 47) { // 47 == '/' in ascii
        printf("root dir does not end with /");
        return 1;
    }

    // The actual program goes on to setup a daemon and call init functions, here we just print the result
    printf("%s", http_rootDir_1);
    return 0;
}