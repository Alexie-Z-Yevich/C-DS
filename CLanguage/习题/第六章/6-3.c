# include<stdio.h>

int factorsum(int number) {
    int count = 0;
    for(int i = 1; i <= number / 2; i++) {
        if(number % i == 0) count += i;
    }
    return count;
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for(int i = m; i <= n; i++) {
        if(factorsum(i) == i) {
            printf("%d\n", i);
        }
    }
}

// scanf 1 1000
// print：
// 6
// 28
// 496
