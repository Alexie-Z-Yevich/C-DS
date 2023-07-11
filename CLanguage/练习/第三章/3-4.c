//
// Created by 1 on 2023/7/10.
//
# include <stdio.h>

int main() {
    char a[10];
    int dig = 0, cha = 0, other = 0, block = 0;
    for (int i = 0; i < 10; ++i) {
        scanf("%c", &a[i]);
        if (a[i] == ' ' || a[i] == '\n') block++;
        else if(a[i] > '0' && a[i] <= '9') dig++;
        else if((a[i] > 'a' && a[i] <= 'z') || (a[i] > 'A' && a[i] <= 'Z')) cha++;
        else other++;
    }
    printf("block = %d, digit = %d, character = %d, other = %d", block, dig, cha, other);
}
