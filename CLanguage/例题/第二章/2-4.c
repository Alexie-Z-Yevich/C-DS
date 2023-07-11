//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double cost;
    if(n <= 15) {
        cost = 4 * n * 1.0 / 3;
    } else {
        cost = 2.5 * n - 10.5;
    }
    printf("%f", cost);
}
