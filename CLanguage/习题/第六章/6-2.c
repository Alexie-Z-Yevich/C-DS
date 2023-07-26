//
// Created by 1 on 2023/7/26.
//
# include <stdio.h>

int main() {
    char v;
    int blank = 0, digit = 0, character = 0, other = 0;
    while(scanf("%c", &v) != EOF && v != '\n') {
        if ((v >= 'a' && v <= 'z') || (v >= 'A' && v <= 'Z')) character++;
        else if (v == ' ') blank++;
        else if (v >= '0' && v <= '9') digit++;
        else other++;
    }
    printf("blank = %d, digit = %d, character = %d, other = %d", blank, digit, character, other);
}
