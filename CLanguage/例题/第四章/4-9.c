//
// Created by 1 on 2023/7/14.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n > 0) {
        printf("%d", n % 10);
        n = n / 10;
    }
}
