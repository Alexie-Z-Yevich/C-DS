//
// Created by 1 on 2023/12/6.
// 判断一个字符串中的数字有多少
//
# include <stdio.h>

int main() {
    char c[100];
    int count = 0;
    int i = 0;
    while((c[i] = getchar()) != '\n') {
        if(c[i] >= '0' && c[i] <= '9') count++;
        i++;
    }
    printf("%d", count);
}
