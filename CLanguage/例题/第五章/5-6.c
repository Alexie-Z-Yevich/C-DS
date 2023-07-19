//
// Created by 1 on 2023/7/19.
//
# include <stdio.h>

void complex_prod(double n1, double m1, double n2, double m2) {
    printf("The prod is %f + %f i\n", (n1 * n2 - m1 * m2), (n1 * m2 + n2 * m1));
}

void complex_add(double n1, double m1, double n2, double m2) {
    printf("The add is %f+ %f i\n", (n1 + n2) , (m1 + m2));
}

int main() {
    double n1, n2, m1, m2;
    scanf("%lf%lf%lf%lf", &n1, &m1, &n2, &m2);
    complex_prod(n1, m1, n2, m2);
    complex_add(n1, m1, n2, m2);
}
