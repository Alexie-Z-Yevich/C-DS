//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>
# include <math.h>

double fact(int n) {
    if(n == 0 || n == 1) return 1;
    double sum  = 1;
    for (int i = 2; i <= n; ++i) {
        sum *= i;
    }
    return sum;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("C^m_n = %f", fact(n) / (fact(m) * fact(n - m)));
}
