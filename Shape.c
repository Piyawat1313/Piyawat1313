#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = ' ';
        }
    }
    int x = n / 3;
    int y = (2 * n)/ 3;
    for(int i = 0; i < n; i++){
        arr[i][x] = '#';
        arr[i][y] = '#';
    }
    for(int j = 0; j < n; j++){
        arr[x][j] = '#';
        arr[y][j] = '#';
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}
