#include<stdio.h>
void main(){
     int tall[15];
     int i;
     for(i = 0; i <= 15; i++){
        scanf("%d",&tall[i]);
     }
     for(;;){
        scanf("%d",&i);
        if(i <= 0 || i > 15){
            break;
        }
        printf("%d\n",tall[i-1]);
     }
    printf("Good bye\n");

}
