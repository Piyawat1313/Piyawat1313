#include<stdio.h>
void main(){
    int num;
    scanf("%d",&num);
    int i;
    for(i=1;i<=num;i++){
        if(i%3 == 0 && i%5 == 0){
            printf("Extremely Difficult\n");
        }
        else if(i%3 == 0){
            printf("Extremely\n");
        }
        else if(i%5 == 0){
            printf("Difficult\n");
        }
        else{
            printf("%d\n",i);
        }
    }
}
