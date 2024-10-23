#include <stdio.h>

void main() {
    int day_1,day_2,day_3;
    scanf("%d %d %d",&day_1,&day_2,&day_3);
    if(day_1<=day_2 && day_1<=day_3){
        printf("A");
    }else if(day_2<=day_3){
        printf("B");
    }else{
        printf("C");
    }
}
