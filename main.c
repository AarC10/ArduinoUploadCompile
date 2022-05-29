/**
 * Compiles and uploads an arduino program
 *
 * @author Aaron Chan
 */

#include <stdio.h>

int main(int argc, char* argv) {
    if (argc != 5) {
        printf("Requires an arduino directory, fqbn and port");
        return 1;
    }

    printf("Success");

    return 0;
}
