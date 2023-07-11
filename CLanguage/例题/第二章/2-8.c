//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>
# include <math.h>

int main() {
    int n, m = 1;
    double sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        sum += pow(-1, i - 1) * (1.0 / m);
        m = m + 2;
    }
    printf("%f", sum);
}
