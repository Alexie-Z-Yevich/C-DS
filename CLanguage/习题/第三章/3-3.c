//
// Created by 1 on 2023/7/12.
//
# include <stdio.h>

int main() {
    int n, m;
    int cost = 0;
    printf("Kilometers : ");
    scanf("%d", &n);
    printf("Time : ");
    scanf("%d", &m);
    if(n <= 3) cost += 10;
    else {
        if (n <= 10) cost = 10 + (n - 3) * 2;
        else cost += 24 + (n - 10) * 3;
    }
    cost += m / 5 * 2;
    printf("The cost is %d", cost);
}
