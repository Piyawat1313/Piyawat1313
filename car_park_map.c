#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    char arr[r][c];
    
  
  //ทำให้เป็นช่องว่าง
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            arr[i][j] = '_';
        }
    }
    int k,row,col;
    scanf("%d",&k);
    
  
  //input row col
    for(int i = 0; i < k; i++){
        scanf("%d%d",&row,&col);
        arr[row - 1][col - 1] = 'x';
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
