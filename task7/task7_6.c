#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *token = strtok(sentence, " \t\n");

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " \t\n");
    }

    return 0;
}

