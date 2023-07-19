//
// Created by 1 on 2023/7/19.
//
# include <stdio.h>

double fact_s (int n);

int main() {
    int i, n;
    printf("Input n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        printf("%3d! = %.0f\n", i, fact_s(i));

    return 0;
}

//double f = 1;
double fact_s(int n) {
//    double f = 1;
    static double f = 1;
    f = f * n;

    return (f);
}

// 将静态变量修改为普通变量当然不能执行，每一次重新计算，实际上传回的计算为1 * i
// 换成全局变量是可以的，因为实际上就是从一个固定位置拿取f值，static就是在函数内定位，全局就是在全局定位
