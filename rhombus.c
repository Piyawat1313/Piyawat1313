#include<stdio.h>
void main(){
    int number;
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("None");
        return 1;
    }
    char state[number][number];
        for(int i = 0; i < number; i++){
            for(int j = 0; j < number; j++){
                state[i][j] = ' ';
            }
        }
        //วาดนาฬิกาทราย แบบกลับหัว
        for(int i = 0; i <= number / 2; i++){
            for(int j = i; j < number - i; j++){
                state[i][j] = '*';
            }
        }
         //วาดนาฬิกาทรายแบบธรรมดา
         for(int i = number / 2 + 1; i < number; i++){
            for(int j = number - i - 1; j <= i; j++){
                state[i][j] = '*';
            }
         }

         for(int i = 0; i < number; i++){
            for(int j = 0; j < number; j++){
                printf("%c",state[i][j]);
            }
            printf("\n");
         }












    /*for(int i = 0; i < 2 * number - 1; i++){
        for(int j = 0; j < 2 * number - 1; j++){
            if(abs(number - 1 - i) + abs(number - 1 - j) < number){
                state[i][j] = '*';
            }else{
                state[i][j] = ' ';
            }
        }
    }
    for(int i = 0; i < 2 * number - 1; i++){
        for(int j = 0; j < 2 * number - 1; j++){
            printf("%c",state[i][j]);
        }
        printf("\n");
    }*/








     /*int mid = number / 2;
    for(int row=0;row<=mid;row++){

        for(int col=0; col< mid -row;col++){
            printf(" ");
        }
        for(int j = 0; j < 2 * row + 1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = mid - 1; i>=0; i--){
        for(int j = 0; j<mid - i; j++){
            printf(" ");
        }
        for(int j = 0;j < 2 * i +1; j++){
            printf("*");
        }
        printf("\n");
    }*/







}
