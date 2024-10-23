#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int matrix[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int m;
    scanf("%d",&m);
    if(m == 1){
       for(int i = 0; i < n; i++){
            for(int j = 0; j < n / 2; j++){
               int temp = matrix[i][j];
               matrix[i][j] = matrix[i][j + n / 2];
               matrix[i][j + n / 2] = temp;
            }
            printf("\n");
       }
    }else if(m == 2){
        for(int i = 0; i < n / 2; i++){
            for(int j = 0; j < n; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i + n / 2][j];
                matrix[i + n / 2][j] = temp;
            }
            printf("\n");
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
