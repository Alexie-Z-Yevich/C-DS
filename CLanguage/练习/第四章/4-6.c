//
// Created by 1 on 2023/7/14.
//
# include <stdio.h>
# include <stdlib.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int n = -1;
    int count = 0;
    while(n != a && count < b) {
        count++;
        scanf("%d", &n);
        if(n > a)
            printf("upper\n");
        else if (n < a)
            printf("lower\n");
    }
    if (count == 7 && n != a) {
        printf("end\n");
    }
    else printf("equals\n");
}
