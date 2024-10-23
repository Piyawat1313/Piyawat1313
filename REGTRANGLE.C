#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int matrix[m][n], matrix2[m][n],matrix_re[m][n];
    for(int row = 0; row < m; row++){
        for(int col = 0; col < n; col++){
            scanf("%d",&matrix[row][col]);
        }
    }
      for(int row = 0; row < m; row++){
        for(int col = 0; col < n; col++){
            scanf("%d",&matrix2[row][col]);
        }
    }
     for(int row = 0; row < m; row++){
        for(int col = 0; col < n; col++){
            matrix_re[row][col] = matrix2[row][col] + matrix[row][col];
        }
    }
     for(int row = 0; row < m; row++){
        for(int col = 0; col < n; col++){
              printf("%d ",matrix_re[row][col]);
        }
        printf("\n");
    }

    return 0;
}
