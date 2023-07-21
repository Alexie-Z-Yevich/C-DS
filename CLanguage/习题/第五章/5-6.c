//
// Created by 1 on 2023/7/21.
//
# include <stdio.h>
# include <math.h>

void is(int n) {
    int num = n;
    int sum = 0;
    while(num > 0) {
        sum += pow(num % 10, 3);
        num /= 10;
    }
    if(sum == n) printf("%d\n", n);
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    for(int i =  n; i <= m; i++) {
        is(i);
    }
}
