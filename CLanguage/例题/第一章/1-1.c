//
// Created by 第一章 on 2023/7/8.
//
# include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int count = 1;
    for (int i = 2; i <= n; i++) {
        count *= i;
    }
    printf("%d", count);
}
