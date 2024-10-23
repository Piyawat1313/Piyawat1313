#include<stdio.h>
void main(){
    int water=3,bread=4,egg=2;
    int x,y,z;
    int sum,sum1,sum2;
    scanf("%d %d %d",&x,&y,&z);
    int sum_water=x/water;
    int sum_bread=y/bread;
    int sum_egg=z/egg;

   w
    if(sum_water<=sum_bread && sum_water<=sum_egg){

         sum=x-(sum_water*water);
         sum1=y-(sum_water*bread);
         sum2=z-(sum_water*egg);
        printf("%d %d %d %d",sum_water,sum,sum1,sum2);

    }else if(sum_bread<=sum_egg && sum_bread<=sum_water){
        sum=y-(sum_bread*bread);
        sum1=x-(sum_bread*water);
        sum2=z-(sum_bread*egg);
        printf("%d %d %d %d",sum_bread,sum1,sum,sum2);
    }else if(sum_egg<=sum_water && sum_egg<=sum_bread){
        sum=z-(sum_egg*egg);
        sum1=x-(sum_egg*water);
        sum2=y-(sum_egg*bread);
        printf("%d %d %d %d",sum_egg,sum1,sum2,sum);
    }

}
