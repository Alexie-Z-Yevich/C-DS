//
// Created by 1 on 2023/7/21.
//
# include <stdio.h>
# include <math.h>

int count = 0;

void countdigit(int n, int m) {
    if(n % 10 == m) count++;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    while(n > 0) {
        countdigit(n, m);
        n = n / 10;
    }
    printf("%d", count);
}
