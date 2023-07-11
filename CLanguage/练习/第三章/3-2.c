//
// Created by 1 on 2023/7/10.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum;
    if (n < 0) sum = -1;
    else if(n > 0) sum = 1;
    else sum = 0;
    printf("%d", sum);
}
