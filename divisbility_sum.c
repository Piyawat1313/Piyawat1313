#include<stdio.h>
void main(){
    int x,y;
    int num,i=0,sum=0,sum1=0,sum2=0;
    scanf("%d%d",&x,&y);
    while(20){
        scanf("%d",&num);
        if(num<=0){
            break;
        }if(num%x==0&& num%y!=0){
            sum+=num;
        }if(num%y==0 && num%x!=0){
            sum1+=num;
        }if(num%x==0 || num%y == 0){
            sum2+=num;
        }
    }
    printf("%d\n%d\n%d",sum,sum1,sum2);
}
