#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            arr[i][j] = 0;
        }
    }
    int k;
    int num,num1;
    int count = 0;
    scanf("%d",&k);
    for(int i = 1; i <= k; i++){
        scanf("%d%d",&num,&num1);
        count++;
        arr[num - 1][num1 - 1] = i;
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
