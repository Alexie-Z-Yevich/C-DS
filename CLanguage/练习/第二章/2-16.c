//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

int main() {
    int sum;
    for(int i = 1; i <= 10; i++) {
        sum = 0;
        sum += i;
    }
    printf("%d", sum);
}
// 10
