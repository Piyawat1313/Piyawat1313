#include <stdio.h>
void up_jutulat(int N){
    for(int i = 0; i < N; i++){
            printf("*");
        }
        printf("\n");
}
void jutulat(int N){
    for(int i = 1; i < N - 1; i++){
            printf("*");
            if(i == 0 || i == N - 1){
                for(int j = 0; j < N - 2; j++){
                    printf(" ");
                }
            }else{
                printf(" ");
                for(int j = 0; j < N - 4; j++){
                    printf("*");
                }
                printf(" ");
            }
            printf("*\n");
        }
}
void down_Jutulat(int N){
     for(int i = 0; i < N; i++){
            printf("*");
        }
    printf("\n");
}
int main(){
    int N;
    scanf("%d", &N);
    if(N >= 7 && N <= 1000){
        char Arr[N][N];
        up_jutulat(N);  // กรอบบน
        jutulat(N);     // ช่องว่างกล่องด้านใน  กรอบขวา
        down_Jutulat(N);   // กรอบล่าง
    }
    return 0;
}
