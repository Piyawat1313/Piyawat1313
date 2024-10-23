#include<stdio.h>
void main(){
    int R,C;
    scanf("%d %d",&R,&C);
    for(int i=0;i<R;i++){
        for(int n=0;n<C;n++){
             printf("*");
        }
        printf("\n");
    }

}
