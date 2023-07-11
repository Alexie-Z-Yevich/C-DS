//
// Created by 1 on 2023/7/10.
//
# include <stdio.h>

int main() {
    double n, m;
    char operator;
    scanf("%lf %c %lf", &n, &operator, &m);
    double z;
    switch (operator) {
        case '+':
            z = n + m;
            break;
        case '-':
            z = n - m;
            break;
        case '*':
            z = n * m;
            break;
        case '/':
            z = n / m;
            break;
        default:
            printf("There is no correct operator!");
            return 0;
    }
    printf("%.2f %c %.2f = %.2f", n, operator, m, z);
}
