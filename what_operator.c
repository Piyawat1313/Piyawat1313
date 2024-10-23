#include<stdio.h>
void main(){
    int A,B,C;
    while(1){
            scanf("%d%d%d",&A,&B,&C);
            if(A==0 && B==0 && C==0){
                break;
            }
            if(A+B==C){
        printf("+\n");
        }else if(A-B==C){
        printf("-\n");
        }else if(A*B==C){
        printf("*\n");
        }else if(A/B==C){
        printf("/\n");
        }else if(A%B==C){
        printf("%%\n");
        }

    }
}
