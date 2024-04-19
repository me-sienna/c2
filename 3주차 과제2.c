#include <stdio.h>
#include <stdlib.h>

void swap(double v[], int left, int right) {
    double temp;

    temp = v[left];
    v[left] = v[right];
    v[right] = temp;
}

void qsort(double v[], int left, int right) {
    int i, last;

    if (left >= right) {
        return;
    }
    swap(v, left, (left + right) / 2);
    last = left;

    for (i = left + 1; i <= right; i++) {
        if (v[i] < v[left]) {
            swap(v, ++last, i);
        }
    }
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

int main(void) {
    double arr[] = { 1.1, 9.9, 2.2, 8.8, 3.3, 7.7, 4.4, 6.6, 5.5, 0.0 };
    int n = sizeof(arr) / sizeof(double);
    
    for (int k = 0; k < n; k++) {
        printf("%.1f ", arr[k]);
    }
    printf("\n");

    qsort(arr, 0, n-1);

    for (int k = 0; k < n; k++) {
        printf("%.1f ", arr[k]);
    }

    return 0;
}
