#include <stdio.h>

void swap(int n, char *pierwsza,char *druga){
    int TMP[5];
    for (int i = 0; i < n; ++i){
        TMP[i] = *(pierwsza + i);
    }

    for (int i = 0; i < n; ++i){
        *(pierwsza + i)=*(druga +i);
    }

    for (int i = 0; i < n; ++i) {
        *(druga + i) = TMP[i];
    }
}

void print(int n, char *tablica){
    for (int i = 0; i < n; ++i) {
        printf("%c\n", *(tablica + i));
    }
}

int main() {

    char a[] = "KOHAM";
    char b[] = "PISSS";

    void *aa = a;
    void *bb = b;

    printf("%s\n","Przed zamiana");
    print(5,aa);
    print(5,bb);

    swap(5,aa,bb);

    printf("%s\n","Po zamianie");

    print(5,aa);
    print(5,bb);

    return 0;
}
