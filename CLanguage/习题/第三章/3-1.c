//
// Created by 1 on 2023/7/12.
//
# include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {
        if(a > c) printf("a is the biggest.\n");
        else printf("c is the biggest.\n");
    } else {
        if(b > c) printf("b is the biggest.\n");
        else printf("c is the biggest.\n");
    }
}
