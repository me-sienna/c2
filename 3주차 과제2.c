#include <stdio.h>
#include <stdlib.h>

void swap(double* v[], int left, int right) {
    double* temp;

    temp = v[left];
    v[left] = v[right];
    v[right] = temp;
}

int comp(double* a, double* b) {
    if (*a > *b) {
        return 1;
    }
    else if (*a == *b) {
        return 0;
    }
    else {
        return -1;
    }
}

void qsort(double* v[], int left, int right, int (*comp)(double*, double*)) {
    int i, last;

    if (left >= right) {
        return;
    }
    swap(v, left, (left + right) / 2);
    last = left;

    for (i = left + 1; i <= right; i++) {
        if ((*comp)(v[i], v[left]) < 0) { 
            swap(v, ++last, i);
        }
    }
    swap(v, left, last);
    qsort(v, left, last - 1, comp);
    qsort(v, last + 1, right, comp);
}

int main(void) {
    double arr[] = { 1.1, 9.9, 2.2, 8.8, 3.3, 7.7, 4.4, 6.6, 5.5, 0.0 };
    int n = sizeof(arr) / sizeof(double);
    double* pArr[20]; 

    for (int k = 0; k < n; k++) {
        printf("%.1f ", arr[k]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        pArr[i] = &arr[i];
    }

    qsort(pArr, 0, n - 1, comp);

    for (int i = 0; i < n; i++) {
        printf("%.1f ", *pArr[i]);
    }
    printf("\n");

    return 0;
}
