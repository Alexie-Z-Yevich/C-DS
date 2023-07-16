//
// Created by 1 on 2023/7/16.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count = 1;
    for(int i = 0; i < n; i++) {
        count = (count + 1) * 2;
    }
    printf("%d", count);
}
