//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

int main() {
    int n;
    int sum = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum *= i;
    }
    printf("%d", sum);
}
