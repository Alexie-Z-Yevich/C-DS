//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

int main() {
    double x;
    scanf("%lf", &x);
    if(x == 0) {
        printf("0");
    } else {
        printf("%.1f", 1 / x);
    }
}
