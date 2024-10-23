#include<stdio.h>
int main(void){
    int number;
    int same = 0;
    int same_new = 0;
    int one = -1;
    scanf("%d",&number);
    for(;;){
        if(number == 0){
            if(same == same_new){
                printf("Palindrome");
    }
        else{
                printf("Not palindrome");
    }
            break;
        }
        if(number < 0){
            printf("Out of range");
            break;
        }
        if(one == -1){
            one = 1;
            same = number%10;
        }
        else if(one == 1){
            same_new = number % 10;
            number = number / 10;
        }
    }
}

