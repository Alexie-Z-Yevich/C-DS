//
// Created by 1 on 2023/7/14.
//
# include <stdio.h>
# include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n == 1) {
        printf("No");
        return 0;
    }
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}
