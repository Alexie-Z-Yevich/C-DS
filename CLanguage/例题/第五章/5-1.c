//
// Created by 1 on 2023/7/17.
//
# include <stdio.h>

double cylinder(int r, int h) {
    double pi = 3.1415;
    return pi * r * r * h;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    double volume = cylinder(n, m);
    printf("%f", volume);
}
