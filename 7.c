#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct tnode {
    char* word;
    int count;
    struct tnode* left;
    struct tnode* right;
} Tree;

Tree* talloc(void) {
    return (Tree*)malloc(sizeof(Tree));
}

Tree* addtree(Tree* p, char* w) {
    int cond;
    if (!p) {
        p = talloc();
        p->word = _strdup(w); // Visual Studio 2022: strdup(w) -> _strdup(w)
        p->count = 1;
        p->left = p->right = NULL;
    } else if ((cond = strcmp(w, p->word)) == 0) {
        p->count++;
    } else if (cond < 0) {
        p->left = addtree(p->left, w);
    } else {
        p->right = addtree(p->right, w);
    }
    return p;
}

void treeprint(Tree* p) {
    static int count = 1;
    if (p) {
        treeprint(p->left);
        printf("%d %-8s", p->count, p->word);
        if (count % 6 == 0) {
            printf("\n");
        }
        else {
            printf("\t");
        }
        count++;
        treeprint(p->right);
    }
}

void freetree(Tree* p) {
    if (p) {
        freetree(p->left);
        freetree(p->right);
        free(p->word);
        free(p);
    }
}

int getword(FILE* fp, char* word) {
    char c;
    int len = 0;

    while ((c = fgetc(fp)) != EOF && !isalpha(c))
        ;

    while (isalpha(c)) {
        word[len++] = c;
        c = fgetc(fp);
    }
    word[len] = '\0';
}


int main() {
    FILE* fp;
    errno_t err = fopen_s(&fp, "Alice.txt", "r");
    if (err != 0) {
        printf("ERROR\n");
        return 1;
    }
    
    Tree* root = NULL;
    char word[100];

    while (getword(fp, word)) {
        root = addtree(root, word);
    }

    treeprint(root);
    freetree(root);
    fclose(fp);
    return 0;
}
