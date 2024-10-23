#include<stdio.h>
#include <math.h>
int main(){
    /*int r,c;
    scanf("%d%d",&r,&c);
    char solid[r][c];
   //ลบกระดาน
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            solid[i][j] = ' ';
        }
    }
     //วาดสี่เหลี่ยมทึบ
     for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            solid[i][j] = '*';
        }
     }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%c",solid[i][j]);
        }
        printf("\n");
    }*/



    //สามเหลี่ยมโปร่ง
    int a,b;
    scanf("%d%d",&a,&b);
    int solids[a][b];
    //ล้างกระดาน
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            solids[i][j] = ' ';
        }
    }
    //สร้างสี่เหลี่ยมแบบโปร่ง
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            solids[i][0] = '*';//up
            solids[a - 1][j] = '*';//down
            solids[0][i] = '*';//left
            solids[i][b - 1] = '*';//right
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%c",solids[i][j]);
        }
        printf("\n");
    }







    //สามเหลี่ยมมุมฉาก
    /*int N;
    scanf("%d",&N);
    char regtragle[N][N];
    //ลบกระดาน
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            regtragle[i][j] = ' ';
        }
    }
    //วาดรูปสามเหลี่ยมมุมฉาก
    for(int i = 0; i < N; i++){
        for(int j = 0; j < i; j++){
            regtragle[i][j] = '*';
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%c",regtragle[i][j]);
        }
        printf("\n");
    }*/



    int n;
    scanf("%d",&n);
    char cross[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
            cross[i][j] = ' ';
            }
        }
        //ทำรูปกากบาท
        for(int i = 0; i <= n; i++){
            for(int j = 1; j <= 1; j++){
                int kak = i + j;
                if(kak >= 0 && kak < n){
                    cross[i][kak] = '*';
                }
            }
        }
        for(int i = 0; i <= n; i++){
            for(int j = 1; j <= 1; j++){
                int kak = (n - 1) - i + j;
                if(kak >= 0 && kak < n){
                    cross[i][kak] = '*';
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%c",cross[i][j]);
            }
            printf("\n");
        }*/









     //เพชร
     /*int n;
     scanf("%d",&n);
     char diamond[2 * n - 1][2 * n - 1];
     //ล้างกระดาน
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            diamond[i][j] = ' ';
        }
     }
     //วาดรูปเพชร
     for(int i = 0; i <= 2 * n - 1; i++){
        for(int j = 0; j <= 2 * n - 1; j++){
            if(abs(n - 1 - i) + abs(n - 1 - j) < n){
                diamond[i][j] = '*';
            }else{
               diamond[i][j] = ' ';
            }
        }
     }
     for(int i = 0; i < 2 * n - 1; i++){
        for(int j = 0; j < 2 * n - 1; j++){
            printf("%c",diamond[i][j]);
        }
        printf("\n");
     }*/




    /* int n;
     scanf("%d",&n);
     char arr[n][n];
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = ' ';
        }
     }
     //วาดรูปสามเหลี่ยมตั้งฉาก
     for(int i = 0; i < n; i++){
        for(int j = n - i - 1; j < n; j++){
            arr[i][j] = '*';
        }
     }
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
     }*/



    //HEART
     /*int h = 6;
     int w = 7;
     char heart[h * 2][w * 4];
     for(int i = 0; i < h * 2; i++){
        for(int j = 0; j < w * 4; j++){
            heart[i][j] = ' ';
        }
     }
     //วาดรูปหัวใจ
     for(int i = 0; i < h * 2; i++){
        for(int j = 0; j < w * 4; j++){
            double x = (double)j / w - 2;
            double y = (double)i / h - 2;
            double ep = pow(x * x + y * y - 1,3) - x * x * pow(y,3);
            if(ep <= 0){
                heart[i][j] = '*';
            }
        }
     }

     for(int i = 0; i < h * 2; i++){
        for(int j = 0; j < w * 4; j++){
            printf("%c",heart[i][j]);
        }
        printf("\n");
     }*/

    return 0;
}


