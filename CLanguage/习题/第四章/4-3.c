//
// Created by 1 on 2023/7/16.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double count1 = 1;
    double count2 = 1;
    double sum = 0;
    for (int i = 2; i <= n + 1; ++i) {
        sum += (count1 + count2) / count1;
        double temp = count1;
        count1 = count1 + count2;
        count2 = temp;
    }
    printf("%f", sum);
}
