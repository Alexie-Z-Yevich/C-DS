//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    double sum = 0;
    for (int i = m; i <= n; ++i) {
        sum += i * i + 1.0 / i;
    }
    printf("%f", sum);
}
