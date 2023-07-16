//
// Created by 1 on 2023/7/16.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i+=2) {
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        int k = i;
        while (k--) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i = n - 2; i >= 1; i-=2) {
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        int k = i;
        while (k--) {
            printf("* ");
        }
        printf("\n");
    }
}
