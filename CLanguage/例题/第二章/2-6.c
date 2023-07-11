//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

int main() {
    int lower, upper;
    scanf("%d %d", &lower, &upper);
    for(int i = lower; i <= upper; i++) {
        printf("When the f = %d, the c = %f\n", i, 5 * (i - 32) * 1.0 / 9);
    }
}
