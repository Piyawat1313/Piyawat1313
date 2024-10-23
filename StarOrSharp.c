#include<stdio.h>
void main(){
    int N,x;
    scanf("%d",&N);
    for(;;){
        scanf("%d",&x);
            if(x == 0){
                break;
            }
        if(x % 2 == 0){
            for(int i=0; i<x;i++){
                printf("#");
            }
        }else{
           for(int i=0; i<x;i++){
                printf("*");
            }
        }
        printf("\n");
    }
}
