//
// Created by 1 on 2023/7/14.
//
# include <stdio.h>

int main() {
    int n1 = 1;
    int n2 = 1;
    printf("%d %d ", n1, n2);
    int flag = 1;
    for(int i = 1; i <= 8; i++) {
        if(flag == 1) {
            flag = 0;
            n1 = n1 + n2;
            printf("%d ", n1);
        }else {
            flag = 1;
            n2 = n1 + n2;
            printf("%d ", n2);
        }

    }

}
