#include<stdio.h>
void main(){
    int num_a,num_b,num_c;
    scanf("%d%d%d",&num_a,&num_b,&num_c);
    int sum_a=num_a*num_a;
    int sum_b=num_b*num_b;
    int sum_c=num_c*num_c;
    int num=0;
    if(num_a<num_b && num_a<num_c){
        if(num_b<num_c){
            num=sum_a + sum_b;
                if(num == sum_c){
                    printf("Pythagoras");
                }else{
                    printf("Not Pythagoras");
                }
        }
        else if(num_c<num_b){
            num=sum_a + sum_c;
                if(num == sum_b){
                    printf("Pythagoras");
                }else{
                    printf("Not Pythagoras");
                }
        }
        else if(num_b < num_a && num_b<num_c){
                if(num_a<num_c){
                    num=sum_b + sum_a;
                        if(num == sum_c){
                            printf("Pythagoras");
                        }else{
                            printf("Not Pythagoras");
                        }
                }
        }
        else if(num_c < num_a){
            num = sum_b + sum_c;
                if(num == sum_c){
                    printf("Pythagoras");
                }else{
                    printf("Not Pythagoras");
                }
        }
        else if(num_c<num_a && num_c <num_b){
                if(num_a < num_b){
                    num = sum_c +  sum_a;
                        if(num == sum_c){
                            printf("Pythagoras");
                        }else{
                            printf("Not Pythagoras");
                        }
                }
        }

    }
}
