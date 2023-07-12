//
// Created by 1 on 2023/7/12.
//
# include <stdio.h>
# include <math.h>

int main(void) {
    int denominator, flag;
    double item, pi;

    flag = 1;
    denominator = 1;
    item = 1.0;
//    item = 0;
    pi = 0;

//    while(fabs(item) >= 0.001) {
    while(fabs(item) >= 0.0001) {
        item = flag * 1.0 / denominator;
        pi = pi +item;
        flag = -flag;
        denominator = denominator + 2;
    }
    pi = pi * 4;
    printf("pi = %.4f\n", pi);

    return 0;
}
// item = 0 时，while第一项不成立，pi 没有经过计算，直接输出0.0000
// 更改精度后输出结果由3.1418变为了3.1436，精度降低参与运算的项数越少，结果自然不一样
