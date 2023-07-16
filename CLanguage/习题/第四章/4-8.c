//
// Created by 1 on 2023/7/16.
//
# include <stdio.h>

int main() {
    int n;
    double height;
    scanf("%lf%d", &height, &n);
    double sum1 = height, sum2 = 0;
    for(int i = 1; i < n; i++) {
        sum1 += height;
        height /= 2;
    }
    sum2 += height / 2;
    printf("sum1 = %.1f, sum2 = %.1f", sum1, sum2);
}
