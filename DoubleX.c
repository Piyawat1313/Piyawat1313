#include<stdio.h>
int main(){
    int row,col;
    scanf("%d%d",&row,&col);
    char arr[row][col];
    char copy_arr4[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            arr[i][j] = ' ';
            copy_arr4[i][j] = ' ';
        }
    }
    int count = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == j){
                arr[i][j] = '*';
                copy_arr4[i][j] = '*';
            }
            if(i + j == row - 1){
                arr[i][j] = '*';
                copy_arr4[i][j] = '*';
            }
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(abs(row - col) == j - i){
                arr[i][j] = '#';
            }
            if(j == col - i - 1){
                copy_arr4[i][j] = '#';
            }
            if(arr[i][j] == '#' && copy_arr4[i][j] == '*'){
                count++;
            }
        }
    }



    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    for(int i = 0; i < row / 2; i++){
        for(int j = 0; j < col / 2; j++){
            printf(" %c",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");



    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%c",copy_arr4[i][j]);
        }
        printf("\n");
    }
    printf("\n");




    for(int i = 0; i < row / 2; i++){
        for(int j = 0; j < col / 2; j++){
            printf("%c",copy_arr4[i][j]);
        }
        printf("\n");
    }



    printf("%d\n",count);
    return 0;
}
