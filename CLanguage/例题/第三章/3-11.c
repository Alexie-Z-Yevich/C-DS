//
// Created by 1 on 2023/7/10.
//
# include <stdio.h>

int main() {
    int n, m;
    char x;
    scanf("%d %c %d", &n, &x, &m);
    int z;
    if (x == '+') z = n + m;
    else if (x == '-') z = n - m;
    else if (x == '*') z = n * m;
    else if (x == '/') {
        if(m == 0) {
            printf("The division can't be zero!");
            return 0;
        }
        else z = n / m;
    }
    else if (x == '%') z = n % m;
    else {
        printf("There is no correct operator!");
        return 0;
    }
    printf("%d %c %d = %d", n, x, m, z);

}
