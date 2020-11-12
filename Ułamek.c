#include <stdio.h>

struct Ulamek{
    int n;
    int d;
};

struct Ulamek Add(struct Ulamek a, struct Ulamek b){
    struct Ulamek c;
    c.n = a.n * b.d + b.n*a.d;
    c.d = a.d*b.d;

    return c;
}
struct Ulamek Multiply(struct Ulamek a, struct Ulamek b) {
    struct Ulamek c;
    c.n = a.n * b.n;
    c.d = a.d * b.d;
    return c;
}

int main(){
    struct Ulamek pierwszy, drugi, trzeci, czwarty;
    pierwszy.n = 1;
    drugi.n = 1;
    pierwszy.d = 2;
    drugi.d = 2;

    trzeci = Add(pierwszy,drugi);
    czwarty = Multiply(pierwszy,drugi);
    printf("%d/%d\n",trzeci.n, trzeci.d);
    printf("%d/%d",czwarty.n, czwarty.d);

    return 0;
}
