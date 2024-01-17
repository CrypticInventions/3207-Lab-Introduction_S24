#include <stdlib.h>

char randchar() {
    char character[] = "abcdefghijklmnopqrstuvwxyz";
    int letter = rand() % 26;
    return character[letter];
}
