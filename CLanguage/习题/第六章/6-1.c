//
// Created by 1 on 2023/7/25.
//
# include <stdio.h>

int main() {
    char x = 064;
    printf("%c", ~ x ^ x << 2 & x);
}
