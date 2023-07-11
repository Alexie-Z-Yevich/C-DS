//
// Created by 1 on 2023/7/9.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n <= 50) {
        printf("%f", n * 0.53);
    } else {
        printf("%f", 50 * 0.53 + (n - 50) * 0.58);
    }
}
