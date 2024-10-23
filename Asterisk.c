#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n % 2 != 0){
    char arr[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                arr[i][j] = ' ';
            }
        }
        for(int i = 0; i < n; i++){
            arr[i][i] = '*';
        }
        for(int i = 0; i < n; i++){
            arr[i][n - i - 1] = '*';
        }
        int center = n / 2;
        for(int j = 0; j < n; j++){
            arr[center][j] = '*';
        }
        for(int r = 0; r < n; r++){
            arr[r][center] = '*';
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%c",arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
