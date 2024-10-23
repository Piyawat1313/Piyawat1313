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
            for(int j = 0; j < n; j++){
                arr[i][0] = '*';
                arr[n - 1][i] = '*';
                arr[0][i] = '*';
                arr[i][n - 1] = '*';
            }
        }
        for(int i = 0; i < n; i++){
            arr[i][i] = '*';
        }
        for(int i = 0; i < n; i++){
            arr[i][n - i - 1] = '*';
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
