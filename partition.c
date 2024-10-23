#include<stdio.h>
void main(){
    int W,N;
    scanf("%d%d",&W,&N);
        for(int Row = 0; Row < (W + 1)*N+1; ++Row){
                printf("*");
        }
        printf("\n");

        for(int Box = 0; Box < N; ++Box){
                printf("*");

                for(int k = 0; k < W; ++k){
                    printf(" ");
                }
        }
        printf("*\n");


        for(int Row = 0; Row <(W + 1)*N+1; ++Row){
            printf("*");
        }
}
