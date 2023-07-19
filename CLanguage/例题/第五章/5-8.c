//
// Created by 1 on 2023/7/19.
//
# include <stdio.h>

int n;  // 定义金额

void inCome() {
    int x;
    printf("请输入收入金额：");
    scanf("%d", &x);
    n += x;
}

void outCome() {
    int x;
    printf("请输入支出金额：");
    scanf("%d", &x);
    n -= x;
}

int main() {
    printf("请输入初始金额：");
    scanf("%d", &n);
    int x = -1;
    do {
        if(x == 0) {
            printf("剩余金额为：%d", n);
            return 0;
        }
        else if(x == 1) inCome();
        else if(x == 2) outCome();
        printf("请输入想要进行的操作：\n（0）结束并打印剩余金额\n（1）收入\n（2）支出\n");
    }while(scanf("%d", &x) != EOF && x >= 0 && x <= 2);
}
