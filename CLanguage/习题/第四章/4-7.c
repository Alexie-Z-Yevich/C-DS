//
// Created by 1 on 2023/7/16.
//
# include <stdio.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    if(m < n) {
        int temp = m;
        m = n;
        n = temp;
    }
    int x = m;
    while(m % n != 0) {
        m += m;
    }
//    这里m就是最大公约数
    while(x % n != 0) {
        x -= n;
        if(x < n) {
            int temp = x;
            x = n;
            n = temp;
        }
    }
    printf("max = %d, min = %d", m, n);
}
