#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Hello, you called SuperEcho with: %d words.\nHere they come... \n\n", argc - 1);

    for(int i = 1; i < argc; i++) {
        printf("%s ", argv[i]);
    }
    printf("\n\nThanks for user SuperEcho, hope to see you again soon!\n");
}