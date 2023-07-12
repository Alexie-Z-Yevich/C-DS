//
// Created by 1 on 2023/7/12.
//
# include <stdio.h>

int main() {
    int n = 0;
    int sum = 0, count1 = 0, count2 = 0;
    while (scanf("%d", &n) != EOF && n > 0 && n <= 100) {
        count1++;
        sum += n;
        if (n < 60) count2++;
    }
    printf("avg = %f; count = %d", sum * 1.0 / count1, count2);
}
