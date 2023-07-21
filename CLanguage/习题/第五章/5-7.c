//
// Created by 1 on 2023/7/21.
//
# include <stdio.h>
# include <math.h>

double fact(int count, int x) {
    if(count == 0) return 1;
    int sum = 1;
    for(int i = 2; i <= count; i += 2) {
        sum *= i;
    }
    return pow(x, count) / sum;
}

double funcos(double e, int x) {
    double sum = 0;
    int count = 0;
    int flag = 1;
    while(fact(count, x) > e){
        sum += flag * fact(count, x);
        count += 2;
        flag = -flag;
    }
    sum += flag * fact(count, x);
    return sum;
}

int main() {
    double e;
    int x;
    scanf("%lf%d", &e, &x);
    double cosx = funcos(e, x);


    printf("%f", cosx);
}
