//
// Created by 1 on 2023/7/10.
//
# include <stdio.h>

int main() {
    char a[10];
    int dig = 0, other = 0, block = 0;
    for (int i = 0; i < 10; ++i) {
        scanf("%c", &a[i]);
        switch (a[i]) {
            case ' ':
            case '\n':
                block++;
                break;
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                dig++;
                break;
            default:
                other++;
                break;
        }
    }
    printf("digit = %d, block = %d, other = %d", dig, block, other);
}
