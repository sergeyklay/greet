#include "greet.h"
#include <stdio.h>
#include <string.h>

void greet_user(const char *name) {
    if (name && strlen(name) > 0) {
        printf("Hello, %s!\n", name);
    } else {
        printf("Hello, world!\n");
    }
}
