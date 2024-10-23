#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    for(int Row = 0; Row < N; ++Row){
        if(Row % 3 == 0){
                for(int Col = 0; Col < N; Col+=3){
                    printf("*  ");
                }
        }else if(Row % 3 == 1){
            for(int Col = 0; Col < N; Col+=3){
                printf(" * ");
            }
        }else{
            for(int Col = 0; Col < N; Col+=3){
                printf("  *");
            }
        }
        printf("\n");
    }
}
