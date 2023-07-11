//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>
# include <math.h>

int main() {
    int money, year;
    double rate, sum;
    scanf("%d %lf %d", &money, &rate, &year);
    sum = money * pow((1 + rate), year);
    printf("%.2f", sum);
}
// scanf("%d %lf %d", &money, &year，&rate) 不能改写，数据类型都改变了
// scanf("%d %lf %d", &money, &rate, &year) 能改写，调换 rate 和 year 的输入顺序即可
