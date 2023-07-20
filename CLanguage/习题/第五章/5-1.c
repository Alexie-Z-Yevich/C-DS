//
// Created by 1 on 2023/7/20.
//
# include <stdio.h>

int sign(int x) {
    if(x > 0) return 1;
    else if(x == 0) return 0;
    else return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int m = sign(n);
    printf("%d", m);
}
