#include<stdio.h>
void main(){
    int k,sum_k,order_n,shirt,val_shirt;
    scanf("%d",&k);
    sum_k = k*100;
    int day=1,max_day=0;
    scanf("%d",&order_n);
    for(int i=0;i<order_n;i++){
        scanf("%d",&shirt);
        while(shirt>0){
            if(shirt<=sum_k){
            sum_k-=shirt;
            printf("%d\n",day);
              shirt=0;
            }else{
                shirt-=sum_k;
                sum_k=k*100;
                day++;
            }
        }
    }


}
