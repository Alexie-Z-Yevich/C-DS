//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

int main() {
    int n, flag = -1, m = 3;
    double sum = 1;
    scanf("%d", &n);
    if(n == 1) {
        printf("%f", sum);
        return 0;
    }
    for (int i = 2; i <= n; ++i) {
        sum += flag * (m - i + 1) * 1.0 / m;
        flag = -flag;
        m += 2;
    }
    printf("%f", sum);
}
