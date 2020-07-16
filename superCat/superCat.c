#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LENGTH 50

int main() {
    char c, fileName[NAME_LENGTH];
    fileName[NAME_LENGTH - 1] = '`';

    printf("Enter file name: \n");
    fgets(fileName, NAME_LENGTH, stdin);
    if(fileName[NAME_LENGTH-1] == '\0') {
        printf("Error: Input too long, max is 50 characters\n");
        exit(EXIT_FAILURE);
    }

    int nameLength = strlen(fileName);
    
    if(NAME_LENGTH > nameLength + 1)
        fileName[nameLength - 1] = '\0';

    FILE *filePointer = fopen(fileName, "r");
    if(filePointer == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    while((c = fgetc(filePointer)) != EOF) {
        printf("%c", c);
    }
    printf("\n");

    fclose(filePointer);

    return 0;
}