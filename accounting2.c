#include<stdio.h>
void main(){
    int buy,total,result=0;
    int count1=0,count2=0;
    while(1){
      scanf("%d %d",&total,&buy);
        if(total==0){
            break;
        }
        if(total==1){
            count1++;
            result+=buy;
        }else if(total==2){
            count2++;
            result-=buy;
        }
    }
    if(result>=0){
            printf("Good\n");
            printf("%d\n",result);
    }else if(result<0){
        printf("Bad\n");
         printf("%d",result);
    }
}
