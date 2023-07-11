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
                break;
            case 2:
                printf("The popcorn is 2.5$\n");
                break;
            case 3:
                printf("The chocolate is 4.0$\n");
                break;
            case 4:
                printf("The cola is 3.5$\n");
                break;
            default:
                printf("See you next time!\n");
                return 0;
        }
    }
}
