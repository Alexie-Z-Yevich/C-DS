//
// Created by 1 on 2023/7/12.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int A = 0, B = 0, C = 0, D = 0, E = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] >= 90) A++;
        else if (a[i] >= 80 && a[i] < 90) B++;
        else if (a[i] >= 70 && a[i] < 80) C++;
        else if (a[i] >= 60 && a[i] < 70) D++;
        else if (a[i] < 60) E++;
    }
    printf("A = %d, B = %d, C = %d, D = %d, E = %d", A, B, C, D, E);
}
