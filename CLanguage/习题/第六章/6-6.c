//
// Created by 1 on 2023/12/5.
//
# include<stdio.h>

int reverse(int number) {
    int n = 0;
    while(number != 0) {
        n = n * 10 + number % 10;
        number /= 10;
    }
    return n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", reverse(n));
}

// 12345
// 54321
