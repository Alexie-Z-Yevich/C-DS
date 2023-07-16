//
// Created by 1 on 2023/7/16.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 1; i < n; ) {
        i *= 2;
        count += 3;
    }
    printf("%d", count);
}
