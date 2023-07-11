//
// Created by 1 on 2023/7/10.
//
# include <stdio.h>

int main() {
    int n = 2000;
    int m;
    scanf("%d", &m);
    if(m < n) {
        printf("error");
        return 0;
    }
    for(int i = n; i <= m; i++) {
        if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) printf("%d\n", i);
    }
}
