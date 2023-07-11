//
// Created by 1 on 2023/7/10.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum;
    if (n >= 0 && n <= 15) sum = 4.0 * n / 3;
    else {
        if(n > 15) sum = 2.5 * n - 10.5;
        else sum = 0;
    }
    printf("%f", sum);
}
