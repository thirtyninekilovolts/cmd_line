#include <iostream>
#include "readline/readline.h"

int main()
{

    char *buffer = readline("> ");
    if (buffer) {
        printf("You entered: %s\n", buffer);
        free(buffer);
    }

    return 0;
}
