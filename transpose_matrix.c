#include<stdio.h>
void main(){
   int R,C;
   scanf("%d%d",&R,&C);
   int A[R][C];
   for(int Row = 0; Row < R; Row++){
        for(int Col = 0; Col < C; Col++){
            scanf("%d",&A[Row][Col]);
        }
   }
   for(int Col = 0; Col < C; Col++){
        for(int Row = 0; Row < R; Row++){
            printf("%d ",A[Row][Col]);
        }
        printf("\n");
    }
}
