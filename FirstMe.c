#include<stdio.h>
void main(){
    int X,Y;
    scanf("%d%d",&X,&Y);
    int number;
    while(1){
        scanf("%d",&number);
        if(X / number == 0 && Y / number == 0){
                if(number < 0){
                   break;
                }
        }
    }
    printf(" number = %d\n%d",number);
}
