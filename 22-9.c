#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

int comp(char* a, char* b) {
    return strcmp(a, b);
}

int comp_r(char* a, char* b) {
    return strcmp(b, a);
}

void swap(char* v[], int i, int j) {
    char* temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void qsort(char* base[], int num, int (*comp)(char*, char*)) {
    if (num <= 1) {
        return;
    }

    char* pivot = base[num / 2];
    int left = 0;
    int right = num - 1;

    while (left <= right) {
        while (comp(base[left], pivot) < 0) {
            left++;
        }
        while (comp(base[right], pivot) > 0) {
            right--;
        }
        if (left <= right) {
            swap(base, left, right);
            left++;
            right--;
        }
    }

    qsort(base, right + 1, comp);
    qsort(base + left, num - left, comp);
}

int main(int argc, char* argv[]) {
    int reverse = 0;
    if (argc > 1 && strcmp(argv[1], "-r") == 0) {
        reverse = 1;
    }

    char* words[MAX_WORDS];
    int wordCount = 0;

    for (int i = 1 + reverse; i < argc; i++) {
        if (wordCount >= MAX_WORDS) {
            printf("단어가 너무 많습니다. 단어의 최대 개수는 %d개입니다.\n", MAX_WORDS);
            return 1;
        }
        words[wordCount++] = argv[i];
    }

    if (reverse == 1)
        qsort(words, wordCount, comp_r);
    else
        qsort(words, wordCount, comp);

    for (int i = 0; i < wordCount; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}