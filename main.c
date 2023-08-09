#include <stdio.h>
#include <string.h>

int endsWithSuffix(const char *word, const char *suffix) {
    int word_length = strlen(word);
    int suffix_length = strlen(suffix);

    if (word_length >= suffix_length) {
        return strcmp(word + word_length - suffix_length, suffix) == 0;
    }

    return 0; // Return 0 if the word is shorter than the suffix
}

int main() {
    char words[][20] = {"jumped", "running", "apple", "drinkable", "hiking"};
    const int num_words = sizeof(words) / sizeof(words[0]);

    for (int i = 0; i < num_words; i++) {
        if (endsWithSuffix(words[i], "ed")) {
            printf("\"%s\" ends with 'ed'.\n", words[i]);
        } else if (endsWithSuffix(words[i], "ing")) {
            printf("\"%s\" ends with 'ing'.\n", words[i]);
        } else if (endsWithSuffix(words[i], "able")) {
            printf("\"%s\" ends with 'able'.\n", words[i]);
        } else {
            printf("\"%s\" doesn't end with any of the specified suffixes.\n", words[i]);
        }
    }

    return 0;
}
