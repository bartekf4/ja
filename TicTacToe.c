#include <stdio.h>
#include <time.h>

char plansza[3][3] = {{' ', ' ', ' '},{' ', ' ', ' '},{' ',' ',' '}};
char ruch;
char *PTRruch = &ruch;


void Wyswietlanie(){
    printf("|%c|%c|%c|\n",plansza[0][0],plansza[0][1],plansza[0][2]);
    printf("|%c|%c|%c|\n",plansza[1][0],plansza[1][1],plansza[1][2]);
    printf("|%c|%c|%c|\n",plansza[2][0],plansza[2][1],plansza[2][2]);
}
char Sprawdanie(){
    if(plansza[0][0]==plansza[1][0]&&plansza[1][0]==plansza[2][0] && plansza[0][0] != ' '){
        return plansza[0][0];
    }
    if(plansza[0][1]==plansza[1][1]&&plansza[1][1]==plansza[2][1] && plansza[0][1] != ' '){
        return plansza[1][1];
    }
    if(plansza[0][2]==plansza[1][2]&&plansza[1][2]==plansza[2][2] && plansza[0][2] != ' '){
        return plansza[0][2];
    }
    if(plansza[0][0]==plansza[0][1]&&plansza[0][1]==plansza[0][2]&& plansza[0][0] != ' '){
        return plansza[0][0];
    }
    if(plansza[1][0]==plansza[1][1]&&plansza[1][1]==plansza[1][2]&& plansza[1][1] != ' '){
        plansza[1][0];
    }
    if(plansza[2][0]==plansza[2][1]&&plansza[2][1]==plansza[2][2]&&plansza[2][2]!=' '){
        return plansza[2][0];
    }
    if(plansza[0][0]==plansza[1][1]&&plansza[1][1]==plansza[2][2]&& plansza[0][0] != ' '){
        return plansza[0][0];
    }
    if(plansza[0][2]==plansza[1][1]&&plansza[1][1]==plansza[2][0]&& plansza[0][2] != ' '){
        return plansza[0][2];
    }
    else{
        return 1;
    }
}
char Zmiana(){
    if(ruch == 'x'){
        ruch = 'o';
        return ruch;
    }
    if(*PTRruch =='o'){
        ruch = 'x';
        return ruch;
    }
}

void Ruch(){
    int pozycja;
    printf("Wykonaj ruch. Ruch %c\n",ruch);
    scanf("%d",&pozycja);

    if (pozycja==1){
        plansza[0][0] = ruch;
    }
    if (pozycja==2){
        plansza[0][1] = ruch;
    }
    if (pozycja==3){
        plansza[0][2] = ruch;
    }
    if (pozycja==4){
        plansza[1][0] = ruch;
    }
    if (pozycja==5){
        plansza[1][1] = ruch;
    }
    if (pozycja==6){
        plansza[1][2] = ruch;
    }
    if (pozycja==7){
        plansza[2][0] = ruch;
    }
    if (pozycja==8){
        plansza[2][1] = ruch;
    }
    if (pozycja==9){
        plansza[2][2] = ruch;
    }
    Zmiana();

}

int main() {
    Wyswietlanie(plansza);
    ruch = 'x';
    while(1){
        if (Sprawdanie()==1){
            Ruch();
            Wyswietlanie();
        }
        else{
            Zmiana();
            printf("Wygral %c",ruch);
            break;
        }

    }

    return 0;
}
