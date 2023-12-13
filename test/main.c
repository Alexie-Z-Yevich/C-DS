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
    int a = 1, b = 2;
    int c = 2;
    a=b = c+b;
//    int i = -8567;
//    char s = 'shs';
//    printf("%s", s);
//    printf("%d", i);
    int a[5] = {1, 3, 4, 2, 5};
    quicksort(a, 0, 4);
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", a[i]);
    }

}


