//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

int main() {
    // L = (v_2 - v_1) * t / 2
    // v_2 = a * t
    int height = 100, a = 10, t = 3;
    int length = (a * t - 0) * t / 2;
    if(length <= height) printf("%d", length);
    else printf("100");
}
