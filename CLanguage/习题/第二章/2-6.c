//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

double fact(int n) {
    if(n == 0 || n == 1) return 1;
    double sum = 1;
    for (int i = 2; i <= n; ++i) {
        sum *= i;
    }
    return sum;
}

int main() {
    int n;
    int e = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        e += fact(i);
    }
    printf("%d", e);
}
