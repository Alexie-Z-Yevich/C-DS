//
// Created by 1 on 2023/7/16.
//
# include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n / 5; i++) {
        for(int j = 1; j <= (n - i * 5) / 2; j++) {
            if(n - (i * 5 + j * 2) > 0){
                printf("5coin = %d, 2coin = %d, 1coin = %d\n", i, j, n - (i * 5 + j * 2));
            }
        }
    }

}
