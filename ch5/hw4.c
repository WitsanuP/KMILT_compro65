#include<stdio.h>

int main(){
    int n[3][3];
    int max=-0x80000000;
    int min=0x7fffffff;
    char tmp[50];

    printf("Please input A0,0: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[0][0]);
    if(n[0][0]>max)max=n[0][0];
    if(n[0][0]<min)min=n[0][0];

    printf("Please input A0,1: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[0][1]);
    if(n[0][1]>max)max=n[0][1];
    if(n[0][1]<min)min=n[0][1];

    printf("Please input A0,2: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[0][2]);
    if(n[0][2]>max)max=n[0][2];
    if(n[0][2]<min)min=n[0][2];

    printf("Please input A1,0: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[1][0]);
    if(n[1][0]>max)max=n[1][0];
    if(n[1][0]<min)min=n[1][0];

    printf("Please input A1,1: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[1][1]);
    if(n[1][1]>max)max=n[1][1];
    if(n[1][1]<min)min=n[1][1];

    printf("Please input A1,2: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[1][2]);
    if(n[1][2]>max)max=n[1][2];
    if(n[1][2]<min)min=n[1][2];

    printf("Please input A2,0: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[2][0]);
    if(n[2][0]>max)max=n[2][0];
    if(n[2][0]<min)min=n[2][0];

    printf("Please input A2,1: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[2][1]);
    if(n[2][1]>max)max=n[2][1];
    if(n[2][1]<min)min=n[2][1];

    printf("Please input A2,2: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[2][2]);
    if(n[2][2]>max)max=n[2][2];
    if(n[2][2]<min)min=n[2][2];

    printf("Maximun number in A is %d.",max);
    printf("\nMinimum number in A is %d",min);

    return 0;
}