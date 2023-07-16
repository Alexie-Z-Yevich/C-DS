//
// Created by 1 on 2023/7/16.
//
# include <stdio.h>

int main() {
    int n = 0;
    int sum = 0;
    while(scanf("%d", &n) != EOF && n > 0) {
        if(n % 2 != 0) sum += n;
    }
    printf("%d", sum);
}
