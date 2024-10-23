#include<stdio.h>
void main(){
   int number;
   int count_00=0,count_01=0,count_10=0,count_11=0;
   int p_number;
   scanf("%d",&p_number);
   while(1){
    scanf("%d",&number);
        if(number!=0 && number!=1){
            break;
        }
        if(p_number==0&& number==0){
            count_00++;
        }
        if(p_number==0 && number==1){
            count_01++;
        }
        if(p_number==1&& number==0){
            count_10++;
        }
        if(p_number==1 && number==1){
            count_11++;
        }
        p_number=number;
   }
   printf("%d\n",count_00);
   printf("%d\n",count_01);
   printf("%d\n",count_10);
   printf("%d\n",count_11);
}
