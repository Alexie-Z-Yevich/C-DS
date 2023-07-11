//
// Created by 1 on 2023/7/10.
//
# include <stdio.h>
# include <stdlib.h>

int main() {
    int x = 1 + rand() % 100;
    int n = -1;
    while(n != x) {
        scanf("%d", &n);
        if(n > x)
            printf("upper\n");
        else if (n < x)
            printf("lower\n");
    }
    printf("equals\n");
}
