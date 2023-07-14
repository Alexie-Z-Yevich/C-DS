//
// Created by 1 on 2023/7/14.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double e = 1;
    for (int i = 1; i <= n; ++i) {
        double count = 1;
        for(int j = 1; j <= i;j++) {
            count *= j;
        }
        e += 1 / count;
    }
    printf("e = %e", e);
}
