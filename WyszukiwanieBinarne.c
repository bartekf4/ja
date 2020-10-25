#include <stdio.h>

int main()
{
    int c, pierwszy, ostatni, srodkowy, n, szukany;
    n = 20;
    int tablica[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,30,40,50,60,70,80,90,100 };

    szukany = 70;

    pierwszy = 0;
    ostatni = n - 1;
    srodkowy = (pierwszy + ostatni) / 2;
    while (pierwszy <= ostatni) {
        if (tablica[srodkowy] < szukany)
            pierwszy = srodkowy + 1;
        else if (tablica[srodkowy] == szukany) {
            printf("%d jest na indeksie %d.\n", szukany, srodkowy + 1);
            break;
        }
        else
            ostatni = srodkowy - 1;
        srodkowy = (pierwszy + ostatni) / 2;
    }
    if (pierwszy > ostatni)
        printf("Nie znaleziono! %d elementu nie ma w tablicy.\n", szukany);
    return 0;
}

