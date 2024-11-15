#include "greet.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc > 1) {
        greet_user(argv[1]);
    } else {
        greet_user(NULL);
    }
    return EXIT_SUCCESS;
}
