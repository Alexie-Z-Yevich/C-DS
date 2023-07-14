//
// Created by 1 on 2023/7/14.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int grade = 999999;
    while(n >= 0) {
        if(n < grade) grade = n;
        scanf("%d", &n);
    }

    printf("Max grade = %d", grade);
}
