//
// Created by 1 on 2023/7/23.
//
# include <stdio.h>

int main() {
    char c;
    while(scanf("%c", &c) != EOF && c != '\n') {
        if (c >= 'a' && c <= 'z') {
            printf("%c", c - 'a' + 'A');
        } else if (c >= 'A' && c <= 'Z') {
            printf("%c", c - 'A' + 'a');
        } else {
            printf("%c", c);
        }
    }
}
