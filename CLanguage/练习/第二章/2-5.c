//
// Created by 1 on 2023/7/9.
//

// 不能改写，没有 * 号无法判断乘法运算；
// 改写顺序是否影响计算结果分情况讨论，如果在除法之前都变成浮点运算，那么精度不一样结果就不一样，见如下例子：
# include <stdio.h>

int main() {
    int fahr;
    scanf("%d", &fahr);
    // fahr为int类型，除法前乘以1.0
    printf("%f\n", 5 * (fahr - 32) * 1.0 / 9);
    printf("%f\n", 5 * 1.0 / 9 * (fahr - 32));
    // fahr为浮点类型，不做乘以1.0的操作

    printf("%f\n", 5 * ((double)fahr - 32) / 9);
    printf("%f\n", 5 / 9 * ((double )fahr - 32));
}

/**
 * 输入：100
 * 37.777778
 * 37.777778
 * 37.777778
 * 0.000000
*/
