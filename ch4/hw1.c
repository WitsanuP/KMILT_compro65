#include<stdio.h>

int main(){
    char tmp[50];
    float num;
    float div;

    printf("Please enter a numbner: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%f",&num);
    
    printf("Divided by: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%f",&div);
    
    printf("Calculation result is: %.3f",num/div);
    return 0;
}