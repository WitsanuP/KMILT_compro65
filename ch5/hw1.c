#include<stdio.h>

int main(){
    int n;
    char tmp[50];
    printf("Please enter a number: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%i",&n);

    if(n>0)
        printf("%d is positive number.",n);
    else if (n==0)
        printf("0 is zero number.");
    else 
        printf("%d is negative number.",n);

    return 0;
}