//
// Created by 1 on 2023/7/12.
//
# include <stdio.h>

int main() {
    int n, m;
    printf("The vehicle's speed is ");
    scanf("%d", &n);
    printf("The maximum speed limited in this row is ");
    scanf("%d", &m);
    if(m * 1.1 >= n) printf("In the limited speed.\n");
    else {
        if (m * 1.5 >= n) printf("You should take 200$.\n");
        else printf("Seriously, Revocation of your license.\n");
    }
}
