//
// Created by 1 on 2023/7/24.
//
# include <stdio.h>

int main() {
    int a, b;
    printf("input a, b:");
    scanf("%o%d", &a, &b);
    printf("%d%5d\n", a, b);
    // 15   17

    scanf("%x%d", &a, &b);
    printf("%d%5d\n", a, b);
    // 23   17
}
