//
// Created by 1 on 2023/7/16.
//
# include <stdio.h>
# include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = (int) pow(10, n - 1);i < (int) pow(10, n); i++) {
        int j = i;
        int sum = 0;
        while(j > 0) {
            sum += pow(j % 10, n);
            j /= 10;
        }
        if(sum == i) printf("%d\n", sum);
    }

}
