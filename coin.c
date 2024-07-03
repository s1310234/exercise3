#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* tossCoin() {
    return (rand() % 2 == 0) ? "Heads" : "Tails";
}

int main() {
    srand(time(NULL));

    char user_name[100]; // ユーザー名を格納するための変数

    printf("Who are you?\n> ");
    fgets(user_name, sizeof(user_name), stdin);
    user_name[strcspn(user_name, "\n")] = '\0';  // 改行文字を削除する

    printf("Hello, %s!\n", user_name); // ユーザー名で挨拶する

    printf("Tossing a coin...\n");

    // コイン投げのシミュレーション
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

    if (heads_count > tails_count) {
        printf("%s won!\n", user_name);
    } else {
        printf("%s lost!\n", user_name);
    }

    return 0;
}
