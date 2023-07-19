//
// Created by 1 on 2023/7/19.
//
# include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int m = max(a, b);
    printf("max = %d", m);
}
