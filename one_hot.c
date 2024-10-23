#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n >= 1 && n <= 20){
        char arr[n][10];
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= 9; j++){
                arr[i][j] = '0';
            }
        }

        int num;
            for(int i = 0; i < n; i++){
                scanf("%d",&num);
                arr[i][num] = '1';
            }

        for(int i = 0; i < n; i++){
            for(int j = 0; j <= 9; j++){
                printf("%c ",arr[i][j]);
            }
            printf("\n");
        }
    }


    return 0;
}
