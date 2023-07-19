//
// Created by 1 on 2023/7/19.
//
# include <stdio.h>

void pyramid(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= i; k++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    pyramid(n);
}
