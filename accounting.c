#include<stdio.h>
void main(){
    int income=1, exp=2,count1=0,num,num1=0,num2=0,count2=0;
    while(50){
        scanf("%d",&income);
        if(income==0){
            break;
        }

        if(income==1){
          scanf("%d",&num);
          num1+=num;
          count1++;
        }else if(income==2){
            scanf("%d",&num);
            num2+=num;
            count2++;
        }
    }
    printf("%d %d\n",count1,count2);
    printf("%d %d %d",num1,num2,num1-num2);
}
