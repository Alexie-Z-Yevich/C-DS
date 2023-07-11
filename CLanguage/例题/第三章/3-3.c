//
// Created by 1 on 2023/7/10.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int sum = 0, count = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        sum += a[i];
        if(a[i] < 60) count++;
    }
    printf("avg = %f; count = %d", sum * 1.0 / n, count);

}
