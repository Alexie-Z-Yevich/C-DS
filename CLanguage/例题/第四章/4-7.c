//
// Created by 1 on 2023/7/14.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        double count = 1;
        for(int j = 1; j <= i;j++) {
            count *= j;
        }
        sum += count;
    }
    printf("sum = %e", sum);
}
