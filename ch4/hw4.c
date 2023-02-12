#include<stdio.h>

int main(){
    char tmp[50];
    char name[3][2][50];

    printf("First Student Name: ");
    fgets(name[0][0],sizeof(name[0][0]),stdin);
    name[0][0][strlen(name[0][0])-1]=0; //  0='\0'=NULL
    printf("Family Name: ");
    fgets(name[0][1],sizeof(name[0][1]),stdin);

    printf("Second Student Name: ");
    fgets(name[1][0],sizeof(name[1][0]),stdin);
    name[1][0][strlen(name[1][0])-1]=0;
    printf("Family Name: ");
    fgets(name[1][1],sizeof(name[1][1]),stdin);

    printf("Third Student Name: ");
    fgets(name[2][0],sizeof(name[2][0]),stdin);
    name[2][0][strlen(name[2][0])-1]=0;
    printf("Family Name: ");
    fgets(name[2][1],sizeof(name[2][1]),stdin);

    printf("Our classroom has three students\n");
    printf("1. %s %s",name[0][0],name[0][1]);
    printf("2. %s %s",name[1][0],name[1][1]);
    printf("3. %s %s",name[2][0],name[2][1]);
}