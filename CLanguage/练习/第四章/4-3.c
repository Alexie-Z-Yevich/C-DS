//
// Created by 1 on 2023/7/12.
//
# include <stdio.h>

int main() {
    double eps;
    scanf("%lf", &eps);
    int flag = 1;
    double sum = 0;
    int n = 1;
    while (1) {
        sum += flag * 1.0 / n;
        if(1.0 / n <= eps) break;
        n += 3;
        flag = -flag;
    }
    printf("pi = %f", 4 * sum);
}
