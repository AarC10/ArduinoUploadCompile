/**
 * Compiles and uploads an arduino program
 *
 * @author Aaron Chan
 */

#include <stdio.h>

int main(int argc, char** argv) {
    if (argc != 4) {
        printf("Requires an arduino directory, fqbn and port\n");
        return 1;
    }

    char* directory = argv[1];
    char* fqbn = argv[2];
    char* port = argv[3];

    char* compileCommand;
    char* uploadCommand;

    if (0 > asprintf(&compileCommand, "arduino-cli compile -b arduino:avr:%s %s\n", directory, fqbn)) return 2;
    if (0 > asprintf(&uploadCommand, "arduino-cli upload %s -b arduino:avr:%s -p /dev/%s", directory, fqbn, port)) return 2;

    printf("Success\n");

    return 0;
}
