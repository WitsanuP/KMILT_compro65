#include<stdio.h>

int main(){
    int bath=973;

    printf("%d one hundred Bahtbanknotes,\n",bath/100);bath%=100;
    printf("%d fifty Baht banknotes,\n",bath/50);bath%=50;
    printf("%d twenty Baht banknotes,\n",bath/20);bath%=20;
    printf("%d ten Baht coins,\n",bath/10);bath%=10;
    printf("%d fiveBaht coins, and\n",bath/5);bath%=5;
    printf("%d oneBaht coins needed to be returned.\n",bath);
    return 0;
}