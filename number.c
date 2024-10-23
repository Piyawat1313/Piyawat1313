#include<stdio.h>
int main(void){
    int Row;
    scanf("%d",&Row);
    int i;
    int j;
   for(i = Row; i>=1; i--){
        for(j = 1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
   }
   for(i = 1; i<=Row;i++){
        printf(" ");
   }
   for(j = Row; j>=1; j++){
        for(i = 1; i<=j; i--){
            printf("%d",i);
        }
        printf("\n");
   }
}
