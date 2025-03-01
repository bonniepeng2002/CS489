#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <string.h>

#define BUFSIZE 256

// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
    // Ensure that the user supplied exactly one command line argument
    if (argc != 2) {
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }
    // char cmd[BUFSIZE] = "wc -c < ";
    // strcat(cmd, argv[1]);
    // system(cmd);

    struct stat file_info;
    if (stat(argv[1], &file_info) == -1) { // check if file exists
        return -1;
    }

    printf("%ld bytes\n", file_info.st_size); // print size of file
    return 0;
}
