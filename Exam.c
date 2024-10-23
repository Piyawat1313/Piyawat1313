#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    for(int col=1;col<=N;++col){
        printf("*   ");
    }
    printf("\n");

    for(int row = 2; row<=N - 1; ++row){
        printf("*   ");
        for(int col = 2;col<N; ++col){
            printf("    ");
        }
    }
     printf("*\n");
    for(int col=1;col<=N;++col){
        printf("*   ");
    }

}
