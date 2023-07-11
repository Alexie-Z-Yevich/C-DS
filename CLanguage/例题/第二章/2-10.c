//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

int main() {
    int n;
    int sum = 1;
    scanf("%d", &n);
    for(int i = 0; i <= n; i++) {
        if(i == 0) {
            printf("2^%d = %d\n", i, sum);
        } else {
            sum *= 2;
            printf("2^%d = %d\n", i, sum);
        }
    }
}
