//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>
# include <math.h>

int main() {
    double x;
    scanf("%lf", &x);
    if(x < 0) {
        printf("%.2f", pow((x + 1), 2) + 2 * x + 1 / x);
    } else {
        printf("%.2f", sqrt(x));
    }
}
