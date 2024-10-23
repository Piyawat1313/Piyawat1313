#include<stdio.h>
void main(){
    int number;
    scanf("%d",&number);
    int old_number = 0;
    while(1){
        if(number < 0){
            printf("Out of range");
            break;
        }
        if(number == 0){
            break;
        }
        else if(number > 0){
            old_number = number%10;
            number = number / 10;
            printf("%d ",old_number);
        }
    }
}
