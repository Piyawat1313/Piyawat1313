#include<stdio.h>
void main(){
    int player1[1];
    int player2[1];
    scanf("%d%d",&player1[1],&player2[1]);
    if(player1[1] == 1 && player2[1] == 3){
        printf("1");
    }
    else if(player1[1] == 2 && player2[1] == 1){
        printf("1");
    }
    else if(player1[1] == 3 && player2[1] == 2){
        printf("1");
    }
    else if(player2[1] == 1 && player1[1] == 3){
        printf("2");
    }
    else if(player2[1] == 2 && player1[1] == 1){
        printf("2");
    }
    else if(player2[1] == 3 && player1[1] == 2){
        printf("2");
    }
    else if(player1[1] == player2[1]){
        printf("0");
    }
}
