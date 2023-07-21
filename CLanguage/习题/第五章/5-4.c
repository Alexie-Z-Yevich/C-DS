//
// Created by 1 on 2023/7/21.
//
# include <stdio.h>
# include <math.h>

int prime(int x) {
    for(int i = 2; i < sqrt(x); i++) {
        if(x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int sum = 0;
    for(int i = m; i <= n; i++) {
        if(prime(i))
            sum += i;
    }
    printf("%d", sum);
}
