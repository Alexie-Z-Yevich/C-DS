//
// Created by 1 on 2023/12/6.
// 计算一个球从20m落下，碰到地又弹起落下高度的1/3，求小球运行的长度，保留3位小数
//

# include <stdio.h>

int main() {
    float high = 20.0;
    float sum = high;
    while(high >= 0.001) {
        sum += 2 * high / 3;
        printf("%f", sum);
        high /= 3;
    }
    printf("%.3f", sum);
}
