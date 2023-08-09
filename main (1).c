#include <stdio.h>
#include <string.h>

void removeSuffix(char *word, const char *suffix) {
    int word_length = strlen(word);
    int suffix_length = strlen(suffix);

    if (word_length >= suffix_length &&
        strcmp(word + word_length - suffix_length, suffix) == 0) {
        word[word_length - suffix_length] = '\0';
    }
}

int main() {
    char word[100] = "jumped";
    const char *suffix = "ed";

    printf("Original word: %s\n", word);
    removeSuffix(word, suffix);
    printf("Word after removing suffix: %s\n", word);

    return 0;
}
