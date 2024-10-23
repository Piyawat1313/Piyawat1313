#include<stdio.h>
int main(){
    int R,C;
    scanf("%d%d",&R,&C);
    int number[R][C];
    for(int row = 0; row < R; row++){
        for(int col = 0; col < C; col++){
            scanf("%d",&number[row][col]);
        }
    }
    // ทำโซน 4 โซน ใช้สูตร จำนวนที่รับมา หาร 2
    int sum1 = 0, sum2 = 0 , sum3 = 0 , sum4 = 0;
    for(int i = 0; i < R / 2; i++){
            for(int j = 0; j < C / 2; j++){
               sum1+=number[i][j];
            }
            for(int j = C / 2; j < C; j++){
                sum2 += number[i][j];
            }
    }
    for(int i = R / 2; i < R; i++){
        for(int j = 0; j < C / 2; j++){
            sum3 += number[i][j];
        }
        for(int j = C / 2; j < C; j++){
            sum4 += number[i][j];
        }
    }
    printf("%d %d\n",sum1,sum2);
    printf("%d %d\n",sum3,sum4);
    return 0;
}
