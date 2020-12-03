#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

bool isEnabled(long long number, unsigned bit){
    if (number & (1 << (bit - 1))) return 1;
    else return 0;
}

long long disableBit(long long number, unsigned bit){
    if (bit <= 0) return number;

    return number & ~(1 << (bit-1));
}
int numerMiesiaca(){
    time_t czas;
    struct tm *ptr;
    time(&czas);
    ptr = localtime(&czas);
    return ptr->tm_mon+1;
}
char *dataSlownie(){
    time_t czas;
    struct tm *ptr;
    time(&czas);
    ptr = localtime(&czas);
    return asctime(ptr);
}

void roznicaCzasu(int (*wks_fun)()){
    time_t start, koniec;
    start = time(NULL);
    for (int i = 0;i < 100154875;++i){
        (*wks_fun)();
    }
    koniec = time(NULL);
    printf("%lf", difftime(koniec,start));
}

struct fKwadratowa{
    int liczbaPierwaistkow;
    float x1;
    float x2;
};

struct fKwadratowa obliczaniePierwiastkow(int a, int b, int c){
    float delta;
    struct fKwadratowa wynik;

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        wynik.liczbaPierwaistkow = 2;
        wynik.x1 = (-b + sqrt(delta)) / (2 * a);
        wynik.x2 = (-b - sqrt(delta)) / (2 * a);
        return wynik;
    }
    if (delta == 0){
        wynik.x1 = 1;
        wynik.x1 = -b / (2 * a);
        wynik.x2 = wynik.x1;
        return wynik;
    }
    else{
        wynik.liczbaPierwaistkow = 0;
        return wynik;
    }

}

void drukowaniePierwiastkow(struct fKwadratowa arg){
    if(arg.liczbaPierwaistkow == 2)
        printf("Liczba pierwiastkow %d, x1=%f, x2=%f\n", arg.liczbaPierwaistkow, arg.x1, arg.x2);
    if(arg.liczbaPierwaistkow == 1)
        printf("Liczba pierwiastkow %d, x1 = x2 =  %f,\n", arg.liczbaPierwaistkow, arg.x1);
    if(arg.liczbaPierwaistkow == 0)
        printf("Brak pierwiastkow rzeczywistych\n");

}

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}


int main(){
    //printf("%d\n", numerMiesiaca());
    //printf("%s\n", dataSlownie());
    //roznicaCzasu(&numerMiesiaca);

    //struct fKwadratowa przyklad = obliczaniePierwiastkow(-2,2,-100);
    //drukowaniePierwiastkow(przyklad);
    //printf("%u", ~UINT_MAX);

    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    printList(head);

    return 0;

}
