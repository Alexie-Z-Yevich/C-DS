//
// Created by 1 on 2023/7/20.
//
# include <stdio.h>

int sum = 0;

int even(int n) {
    if(n % 2 != 0) sum += n;
}

int main() {
    int n;
    while(scanf("%d", &n) != EOF && n > 0){
        even(n);
    }

    printf("%d", sum);
}
