//
// Created by 1 on 2023/7/14.
//
# include <stdio.h>

int main() {
    for (int a = 0; a <= 45; a++) {
        for (int b = 0; a + b <= 45; b++) {
            int c = 45 - a - b;
            if (6 * a + 4 * b + c == 90) {
                printf("a = %d, b = %d, c = %d\n", a, b, c);
            }
        }
    }
}
