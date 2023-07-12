//
// Created by 1 on 2023/7/12.
//
# include <stdio.h>

int main() {
    int count, num;
    double grade, total;

    num = 0;
    total = 0;
    count = 0;
    printf("Enter grades:");
    scanf("%lf", &grade);

    while(grade >= 0) {
        total = total + grade;
        num++;
        if(grade < 60)
            count++;
        scanf("%lf", &grade);
    }
    if(num != 0) {
        printf("Grade average is %.2f\n", total / num);
        printf("Number of failures is %d\n", count);
    }
    else
        printf("Grade average is 0 \n");

    return 0;
}
// 最后输入-2无影响，判别是否继续的条件是grade >= 0，小于0都会导致进程结束
// 直接结束，输出 Grade average is 0
