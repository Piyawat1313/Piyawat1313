#include<stdio.h>
void main(){
    int number;
    for(;;){
     scanf("%d",&number);
     if(number<=0){
        break;
     }
     for(int j = 0;j<number;++j)
        printf("*");
        printf("\n");
    }
    printf("\n");
}
