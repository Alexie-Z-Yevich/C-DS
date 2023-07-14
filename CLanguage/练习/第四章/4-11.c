//
// Created by 1 on 2023/7/14.
//
# include <stdio.h>

int fact(int n) {
    for (int i = 2; i < n / 2; ++i) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, m;
    int sum = 0;
    int count = 0;
    scanf("%d%d", &n, &m);
    for(int i = n; i <= m; i++) {
        if(fact(i)){
            count++;
            sum += i;
        }
    }
    printf("count = %d, sum = %d", count, sum);

}
