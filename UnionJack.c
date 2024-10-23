#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char jack[n][n];
    if(n >= 21 && n <= 99){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                jack[i][j] = ' ';
            }
        }
        for(int i = 0; i < n; i++){
            jack[i][0] = '*';//ขอบบน
             jack[n - 1][i] = '*';// ขอบล่าง
             jack[0][i] = '*';// ขอบซ้าย
             jack[i][n - 1] = '*';//ทำขอบทางขวา
        }
        // เครื่องหมายตรงกลาง
       int center = n / 2;
       for(int i = center - 2 ; i <= center + 2; i++){
            for(int j = 0; j < n; j++){
                 jack[center][i] = '*';//เส้นแนวนอนตรงกลาง
                 jack[i][center] = '*';//เส้นแนวตั้งตรงกลาง
            }
       }
        //วาดเส้นแทยงมุมจากมุมซ้ายบนไปขวาล่าง ความหนา3ช่อง
        for(int i = 0; i < n; i++){
            for(int j = -1; j <= 1; j++){
                int ty = i + j;
                if(ty >= 0 && ty < n){
                   jack[i][ty] = '*';
                }
            }
        }
        //วาดเส้นแทยงมุมจากมุมขวาบนไปซ้ายล่าง ความหนา 3 ช่อง
        for(int i = 0; i < n; i++){
            for(int j = -1; j <= 1; j++){
               int ty = (n - 1) - i + j;
               if(ty >= 0 && ty < n){
                    jack[i][ty] = '*';
               }
            }
        }
        //result
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%c",jack[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
