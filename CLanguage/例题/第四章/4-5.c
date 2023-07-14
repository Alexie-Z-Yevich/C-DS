//
// Created by 1 on 2023/7/14.
//
# include <stdio.h>
# include <stdlib.h>

int main() {
    int x = 1 + rand() % 100;
    int n = -1;
    int count = 0;
    while(n != x && count < 7) {
        count++;
        scanf("%d", &n);
        if(n > x)
            printf("upper\n");
        else if (n < x)
            printf("lower\n");
    }
    if (count == 7 && n != x) {
        printf("end\n");
    }
    else printf("equals\n");
}

