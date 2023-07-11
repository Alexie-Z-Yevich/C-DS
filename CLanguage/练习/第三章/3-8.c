//
// Created by 1 on 2023/7/10.
//
# include <stdio.h>

int main() {
    int n = 0;
    int operator;
    while(n < 5) {
        printf("[1] Select apples\n[2] Select pears\n[3] Select oranges\n[4] Select grapes\n[0] Exit\n");
        scanf("%d", &operator);
        n++;
        if(operator == 0){
            printf("See you next time!\n");
            return 0;
        }
        switch (operator) {
            case 1:
                printf("The apples is 3.00$\n");
                break;
            case 2:
                printf("The pears is 2.50$\n");
                break;
            case 3:
                printf("The oranges is 4.10$\n");
                break;
            case 4:
                printf("The grapes is 10.20$\n");
                break;
            default:
                printf("The NaN is 00.00$\n");
                break;
        }
    }
}
