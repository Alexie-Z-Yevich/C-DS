//
// Created by 1 on 2023/7/17.
//
# include <stdio.h>

int even(int n) {
    if(n % 2 == 0) {
        return 1;
    }else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", even(n));
}
