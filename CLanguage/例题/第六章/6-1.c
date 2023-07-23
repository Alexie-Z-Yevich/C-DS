//
// Created by 1 on 2023/7/23.
//
# include <stdio.h>

int main() {
    char c;
    for(int i = 0; i < 6; i++) {
        scanf("%c", &c);
        printf("%d", (c - 'a' + 'A') % 10);
    }
}
