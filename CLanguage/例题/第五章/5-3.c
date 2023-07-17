//
// Created by 1 on 2023/7/17.
//
# include <stdio.h>

double funpi(double e) {
    double sum = 1;
    int flag = -1;
    double count = 1;
    do {
        count += 2;
        sum += flag * 1 / count;
        flag = -flag;
    }
    while(1 / count >= e);
    return 4 * sum;
}

int main() {
    double e;
    scanf("%lf", &e);
    printf("%f", funpi(e));
}
