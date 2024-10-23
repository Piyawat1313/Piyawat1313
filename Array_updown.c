#include<stdio.h>
#include<stdlib.h>
int matrix(int N, int jutulat[N][N]){
     for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            scanf("%d",&jutulat[row][col]);
        }
    }
}
int up(int N , int jutulat[N][N]){
    int sumup = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i < j){
                sumup+=jutulat[i][j];
            }
        }
    }
    return sumup;
}
int less(int N, int jutulat[N][N]){
    int sumless = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i > j){
                sumless+=jutulat[i][j];
            }
        }
    }
    return sumless;
}
int main(){
    int N;
    scanf("%d",&N);
    int jutulat[N][N];
    matrix(N,jutulat);
    int heigh = up(N,jutulat);
    int low = less(N,jutulat);
    printf("%d\n%d", heigh, low);
    return 0;
}
