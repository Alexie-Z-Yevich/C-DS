//
// Created by 1 on 2023/7/14.
//
# include <stdio.h>
double fact(int n) {
    double sum = 1;
    for(int i = 1; i <= n; i++) {
        sum *= i;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += fact(i);
    }
    printf("sum = %e", sum);
}
