//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>
# include <math.h>

int main() {
    int money, year;
    double rate, sum;
    scanf("%d %d %lf", &money, &year, &rate);
    sum = money * pow((1 + rate), year);
    printf("%.2f", sum);
}
