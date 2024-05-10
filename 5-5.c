#include <stdio.h>
#include <string.h>
#define MAXWORD 5000

void swap(int v[], int i, int j) {
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void qsort(int v[], int left, int right) {
    int i, last;
    if (left >= right) {
        return;
    }
    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++) {
        if (v[i] > v[left]) {
            swap(v, ++last, i);
        }
    }
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

int main(int argc, char* argv[]) {
    char c;
    int num = 0;
    int arr[MAXWORD];
    int a = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
        }
        else if (c == '\n') {
            arr[a] = num;
            a++;
            num = 0;
        }
    }
    arr[a] = '\0';

    qsort(arr, 0, a - 1);

    printf("\n\nAfter sort\n");
    if (argc > 1 && strcmp(argv[1], "-n") == 0) {
        for (int b = a - 1; b > -1; b--) {
            printf("%d\n", arr[b]);
        }
    }
    else {
        for (int b = 0; b < a; b++) {
            printf("%d\n", arr[b]);
        }
    }


    return 0;
}