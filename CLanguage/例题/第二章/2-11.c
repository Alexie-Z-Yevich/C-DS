//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>
double fact(int n) {
    if(n == 1 || n == 0) return 1;
    int sum = 1;
    for (int i = 2; i <= n; ++i) {
        sum *= i;
    }
    return sum;
}

int main() {
    int n;
    int sum = 1;
    scanf("%d", &n);
    for(int i = 0; i <= n; i++) {
        printf("%d! = %.0f\n", i, fact(i));
    }
}
