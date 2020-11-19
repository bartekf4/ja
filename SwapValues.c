#include <stdio.h>

void swap(int*pierwsza,int*druga,int*trzecia){
    int TMP=*pierwsza;
    int TMP1=*druga;
    *pierwsza = *trzecia;
    *trzecia = TMP1;
    *druga = TMP;
}

int main() {
    int a = 5;
    int*aa = &a;
    int b = 10;
    int*bb = &b;
    int c = 15;
    int*cc = &c;
    printf("%d,%d,%d\n",*aa,*bb,*cc);
    swap(aa,bb,cc);
    printf("%d,%d,%d",*aa,*bb,*cc);

    return 0;
}
