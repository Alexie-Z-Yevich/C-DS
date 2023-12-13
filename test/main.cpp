# include <iostream>


// 快速排序
int detach(int a[] ,int l, int r){
    int temp = a[l];
    while(l < r){
        while(l< r && a[r] >= temp)r --;
        a[l] = a[r];
        while(l < r && a[l] >= temp)l ++;
        a[r] = a[l];
    }
    a[l] = temp;
    return l;
}
void quicksort(int a[], int l, int r){
    if(l < r){
        cout << "l = " << l << endl;
        int temp = detach(a, l, r);
        quicksort(a, l, temp - 1);
        quicksort(a, temp + 1, r);
    }
}
