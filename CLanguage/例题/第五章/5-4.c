//
// Created by 1 on 2023/7/19.
//
# include <stdio.h>
# include <math.h>

int prime(int n) {
    for(int i = 2; i < sqrt(n); i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    if(prime(n) == 1) printf("This is prime num\n");
    else printf("This isn't prime num\n");
}
