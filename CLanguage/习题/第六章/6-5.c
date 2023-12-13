//
// Created by 1 on 2023/12/5.
//
# include <stdio.h>

int main() {
    int a[100] = {0};
    for(int i = 2; i < 100; i++) {
        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                a[i] = 1;
                break;
            }
        }
    }
    int count = 0;
    for(int i = 6; i <= 100; i += 2) {
        for(int j = 2; j < 100; j++) {
            if(a[j] == 0 && a[i - j] == 0){
                printf("%d = %d + %d; ", i, j, i - j);
                break;
            }
        }
        count++;
        if(count % 5 == 0) {
            printf("\n");
            count = 0;
        }
    }
}

// 注意a[]数组的初始化方式
