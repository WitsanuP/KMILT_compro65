#include<stdio.h>

int main(){
    int day=20599;

    printf("\tJack Ma has been living in this world for %d years, ",day/365);day%=365;
    printf("%d\n",day/30);day%=30;
    printf("months, and %d days.",day);
    return 0;
}