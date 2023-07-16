//
// Created by 1 on 2023/7/16.
//
# include <stdio.h>

int main() {
    int n, a;
    scanf("%d%d", &n, &a);
    int x = n;
    int sum = 0;
    for(int i = 0; i < a; i++) {
        sum += x;
        x = x * 10 + n;
    }
    printf("%d", sum);

}
