//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

int main() {
    int n, m = 1, flag = 1;
    double sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += 1.0 / m * flag;
        m += 3;
        flag = -flag;
    }
    printf("%f", sum);
}
