//
// Created by 1 on 2023/7/19.
//
# include <stdio.h>

void fact_s(int n) {
    int sum = 1;
    for(int i = 2; i <= n; i++) {
        sum *= i;
    }
    printf("%d! = %d\n", n, sum);
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        fact_s(i);
    }
}
