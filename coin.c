#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* tossCoin() {
    return (rand() % 2 == 0) ? "Heads" : "Tails";
}

int main() {
    srand(time(NULL));

    printf("Tossing a coin...\n");

    char* results[3];
    int heads_count = 0, tails_count = 0;

    for (int i = 0; i < 3; ++i) {
        results[i] = tossCoin();
        printf("Round %d: %s\n", i + 1, results[i]);
        if (strcmp(results[i], "Heads") == 0) {
            heads_count++;
        } else {
            tails_count++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads_count, tails_count);

    return 0;
}
