//
// Created by 1 on 2023/12/5.
//
# include<stdio.h>

long a[10001];

void fib(int n) {
    printf("%ld\n", a[n]);
}

int main() {
    int m, n;

    a[1] = 1, a[2] = 1;
    for(int i = 3; i < 10001; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    scanf("%d%d", &m, &n);
    for(int i = m; i <= n; i++) {
        fib(i);
    }

}

// 目前这个版本是有瑕疵的，实际上fib在不到100位就超过了long大小
// 最佳做法应该是转换为string
