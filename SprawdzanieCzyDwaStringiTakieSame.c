#include <stdio.h>

int main()
{
    char slowo[] = "voldemort";

    char wzorzec[] = "voldemort";


    int i, j;

    i = sizeof(slowo) / sizeof(slowo[0]);
    j = sizeof(wzorzec) / sizeof(wzorzec[0]);


    if (i == j)
    {
        for (int k = 0; i <= j; ++k)
        {
            if (slowo[k] == wzorzec[k])
            {
                if (k == j) 
                {
                    printf("Sa takie same");
                    break;

                }
                
            }
            else 
            {
                printf("Nie sa takie same");
                break;
            }
        }

    }
    else
        printf("Maja inna dlugosc");

}
