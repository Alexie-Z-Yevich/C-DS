//
// Created by 1 on 2023/7/12.
//
# include <stdio.h>
# include <math.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int perimeter;
    double area;
    if(a + b > c && a + c > b && b + c > a) {
        perimeter = a + b + c;
        double s = (a + b + c) * 1.0 / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        printf("Impossible");
        return 0;
    }
    printf("perimeter = %d, area = %f", perimeter, area);
}
