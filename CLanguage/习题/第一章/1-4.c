//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}
