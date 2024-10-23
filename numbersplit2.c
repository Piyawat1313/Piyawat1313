#include<stdio.h>
void main(){
    int number,same;
    scanf("%d%d",&number,&same);
    int old_number = 0;
    int count = 0;
    while(1){
        if(number == 0){
            if(count == 0){
                printf("None");
            }else{
                printf("%d",count);
            }
            break;
        }
        if(number < 0){
            printf("Out of range");
            break;
        }
        else if(number > 0){
            old_number=number % 10;
            number = number /10;
                if(old_number == same){
                    count++;
                }
        }
    }

}
