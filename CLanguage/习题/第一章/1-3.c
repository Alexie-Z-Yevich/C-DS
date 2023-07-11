//
// Created by 第一章 on 2023/7/8.
//
# include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 6; i <= 100; ++i) {
        if(i % 6 == 0) {
            sum += i;
        }
    }
    printf("%d", sum);
}
