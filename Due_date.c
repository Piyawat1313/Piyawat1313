#include<stdio.h>
void main(){
  int k,n,shirt;
    scanf("%d\n%d",&k,&n);
    int max_k=k*100;
    printf("Max_k = %d\n",max_k);
    int day=1;
    int max_k1=max_k;
    printf("Max_k1 = %d\n",max_k1);
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&shirt);

        while(shirt>i){
            if(shirt<=max_k1){
                max_k1-=shirt;
                printf("max_k1 = %d\n",max_k1);
                    shirt=0;
                printf("%d\n",day);
            }else{
                shirt-=max_k1;
                day++;
                max_k1=max_k;
            }
        }
    }
}

