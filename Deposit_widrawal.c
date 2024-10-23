#include<stdio.h>
int main(void){
    int income,buy,cash,cash_1;
    int sum=0;
    while(1){
            scanf("%d%d",&income,&buy);
        if(income == 1){
            sum+=buy;
        }
        else if(income == 2){
            sum-=buy;
        }
        if(income > 50000){
            printf("Transaction exceeds the limit\n");
            break;
        }
        if(income >= 100000){
            printf("Account balance is over 100000 Baht\n");
            break;
        }
        if(buy <= 0){
            printf("Account balance is less than 0 Bath\n");
            break;
        }
         printf("Account balance is %d Baht\n",sum);
    }

}  //ยังไม่สมบูรณ์แบบ
