#include<stdio.h>

int main(){
    char tmp[50];
    int i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;

    printf("Please enter number 1: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&i0);

    printf("Please enter number 2: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&i1);

    printf("Please enter number 3: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&i2);

    printf("Please enter number 4: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&i3);

    printf("Please enter number 5: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&i4);

    printf("Please enter number 6: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&i5);

    printf("Please enter number 7: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&i6);

    printf("Please enter number 8: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&i7);

    printf("Please enter number 9: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&i8);

    printf("Please enter number 10: ");
    fgets(tmp,sizeof(tmp),stdin);
    sscanf(tmp,"%d",&i9);

    printf("The number are %d, %d, %d, %d, %d, %d, %d, %d, %d, %d ",i0,i1,i2,i3,i4,i5,i6,i7,i8,i9);
    return 0;
}