#include<stdio.h>

int main(){
    char tmp[50];
    int num[10];
    
    printf("Please enter number 1: "); 
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&num[0]);
    
    printf("Please enter number 2: "); 
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&num[1]);
    
    printf("Please enter number 3: "); 
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&num[2]);

    printf("Please enter number 4: "); 
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&num[3]);

    printf("Please enter number 5: "); 
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&num[4]);

    printf("Please enter number 6: "); 
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&num[5]);

    printf("Please enter number 7: "); 
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&num[6]);

    printf("Please enter number 8: "); 
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&num[7]);

    printf("Please enter number 9: "); 
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&num[8]);

    printf("Please enter number 10: "); 
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&num[9]);

    printf("The number are %d, %d, %d, %d, %d, %d, %d, %d, %d, %d ",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9]);
    return 0;
}
