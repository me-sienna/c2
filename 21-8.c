#include <stdio.h>

#define MAX 100
#define IN 1  
#define OUT 0  

int main(int argc, char* argv[]) {
    FILE* fp = fopen("9.dat", "r");
    if (fp == NULL) {
        perror("Failed to open file");
        return 1;
    }

    int c, n1, nw, nc, state;
    state = OUT;
    n1 = nw = nc = 0;

    char str[MAX];
    while (fgets(str, MAX, fp) != NULL) {
        printf("%s", str);

        for (int i = 0; i < MAX && str[i] != '\0'; i++) {
            ++nc;
            if (str[i] == '\n')
                ++n1;
            if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
                state = OUT;
            else if (state == OUT) {
                state = IN;
                ++nw;
            }
        }
    }
    fclose(fp);

    printf("%d %d %d %s\n", n1, nw, nc, argv[1]);
    return 0;
}