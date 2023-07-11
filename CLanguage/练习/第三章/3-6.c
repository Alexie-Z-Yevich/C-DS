//
// Created by 1 on 2023/7/10.
//
# include <stdio.h>

int main() {
    int n = 0;
    int operator;
    while(n < 5) {
        printf("[1] Select crisps\n[2] Select popcorn\n[3] Select chocolate\n[4] Select cola\n[0] Exit\n");
        scanf("%d", &operator);
        n++;
        switch (operator) {
            case 1:
                printf("The crisps is 3.0$\n");
            case 2:
                printf("The popcorn is 2.5$\n");
            case 3:
                printf("The chocolate is 4.0$\n");
            case 4:
                printf("The cola is 3.5$\n");
            default:
                printf("See you next time!\n");
                return 0;
        }
    }
}
// 去掉break，每次执行完选项会执行一次default
