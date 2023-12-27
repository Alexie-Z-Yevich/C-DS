# include <stdio.h>
// 快速排序
int detach(int a[] ,int l, int r){
    int temp = a[l];
    while(l < r){
        while(l< r && a[r] >= temp)r --;
        a[l] = a[r];
        while(l < r && a[l] <= temp)l ++;
        a[r] = a[l];
    }
    a[l] = temp;
    return l;
}
void quicksort(int a[], int l, int r){
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", a[i]);
    }
    if(l < r){
//        printf()"l = " << l << endl;
        int temp = detach(a, l, r);
        quicksort(a, l, temp - 1);
        quicksort(a, temp + 1, r);
    }
}
int main() {
    int x = 10;
    int y = (2 * 8, x += 5);
    printf("%d, %d", x, y);


}


