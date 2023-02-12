#include<stdio.h>

int main(){
    char tmp[50];
    int n[3][3];
   
    printf("A1,1 is ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[0][0]);
       
    printf("A1,2 is ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[0][1]);
       
    printf("A1,3 is ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[0][2]);
       
    printf("A2,1 is ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[1][0]);
       
    printf("A2,2 is ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[1][1]);
       
    printf("A2,3 is ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[1][2]);
       
    printf("A3,1 is ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[2][0]);
       
    printf("A3,2 is ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[2][1]);
       
    printf("A3,3 is ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&n[2][2]);

    printf("The matrix A is\n");
    printf("%d %d %d\n",n[0][0],n[0][1],n[0][2]);
    printf("%d %d %d\n",n[1][0],n[1][1],n[1][2]);
    printf("%d %d %d\n",n[2][0],n[2][1],n[2][2]);
   
    int det;
    det=(n[0][0]*(n[1][1]*n[2][2]-n[2][1]*n[1][2]))-
    (n[0][1]*(n[1][0]*n[2][2]-n[2][0]*n[1][2]))+
    (n[0][2]*(n[1][0]*n[2][1]-n[2][0]*n[1][1]));
    printf("The determinant of matrix is %d",det);
    return 0;
}