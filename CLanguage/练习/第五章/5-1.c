//
// Created by 1 on 2023/7/19.
//
# include <stdio.h>

void sum(int n) {
    int sum = 0;
    for(int i = 0; i <= n; i++) {
        sum += i;
    }
    printf("sum = %d\n", sum);
}

int main() {
    int n;
    scanf("%d", &n);
    sum(n);
}
