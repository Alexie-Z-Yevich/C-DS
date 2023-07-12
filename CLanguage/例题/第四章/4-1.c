//
// Created by 1 on 2023/7/12.
//
# include <stdio.h>

int main() {
    int flag = 1;
    double sum = 0;
    int n = 1;
    while (1) {
        sum += flag * 1.0 / n;
        if(1.0 / n <= 0.0001) break;
        n += 2;
        flag = -flag;
    }
    printf("pi = %f", 4 * sum);
}
