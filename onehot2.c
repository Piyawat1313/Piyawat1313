#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int number[n];
    int max = 0;
    for(int i = 0; i < n; i++){
        scanf("%d",&number[i]);
        if(number[i] > max){
            max = number[i];
        }
    }
    char arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = ' ';
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = '0';
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < max; j++){
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
