#include<stdio.h>
#include<string.h>

int main(){
    int n,m;
    char op;
    char tmp[50];

    printf("Please enter a number: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n);

    printf("Operation: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%c",&op);

    printf("Please enter another number: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&m);
    
    if(op=='+')printf("%d + %d = %d",n,m,n+m);
    else if(op=='-')printf("%d - %d = %d",n,m,n-m);
    else if(op=='x')printf("%d x %d = %d",n,m,n*m);
    else if(op=='/')printf("%d / %d = %d",n,m,n/m);
    
    return 0;
}