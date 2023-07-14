//
// Created by 1 on 2023/7/13.
//
# include <stdio.h>
# include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    n = abs(n);
    int count = 0;
    while(n > 0) {
        n = n / 10;
        count++;
    }
    printf("count = %d", count);
}
