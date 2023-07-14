//
// Created by 1 on 2023/7/14.
//
# include <stdio.h>

int main() {
    int n = 0;
    for (int i = 2; i <= 100; i++) {
        int flag = 0;
        for(int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            printf("%d ", i);
            n++;
        }
        if(n == 10) {
            printf("\n");
            n = 0;
        }
    }
}
