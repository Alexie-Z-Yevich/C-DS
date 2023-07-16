//
// Created by 1 on 2023/7/16.
//
# include <stdio.h>
# include <math.h>

double fact(int n) {
    int sum = 1;
    if(n <= 1) return sum;
    for(int i = 2; i <= n; i++) {
        sum *= i;
    }
    return sum;
}

int main() {
    int x = 0;
    scanf("%d", &x);
    int count = 1;
    double sum = 1;
    double ff = 1;
    while(ff > 0.00001) {
        ff = pow(x, count) / fact(count);
        sum += ff;
        count++;
    }
    printf("%f", sum);
}
