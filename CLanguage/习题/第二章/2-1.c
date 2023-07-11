//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("sum = %d\n", a + b + c + d);
    printf("avg = %.1f\n", (a + b + c + d) * 1.0 / 4);
}
