git merge user_name

#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // ここに <string.h> を追加
#include <time.h>

int main() {
    char name[50];
    printf("Who are you?\n> ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character from the name
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Hello, %s!\n", name);

    srand(time(NULL));
    int heads = 0, tails = 0;

    printf("Tossing a coin...\n");

    for (int i = 1; i <= 3; i++) {
        int toss = rand() % 2;
        if (toss == 0) {
            printf("Round %d: Heads\n", i);
            heads++;
        } else {
            printf("Round %d: Tails\n", i);
            tails++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads, tails);

    if (heads > tails) {
        printf("%s won!\n", name);
    } else {
        printf("%s lost!\n", name);
    }

    return 0;
}
