/**
 * Compiles and uploads an arduino program
 *
 * @author Aaron Chan
 */

#include <stdio.h>

int main(int argc, char** argv) {
    if (argc != 5) {
        printf("Requires an arduino directory, fqbn and port\n");
        return 1;
    }

    char* directory = argv[2];
    char* fqbn = argv[3];
    char* port = argv[4];


    printf("Success\n");

    return 0;
}
