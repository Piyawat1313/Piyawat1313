#include<stdio.h>
void main(){
    int number_a,number_b,number_c;
    scanf("%d%d%d",&number_a,&number_b,&number_c);
    //หาเลขมากสุดก่อน
    int max = number_a;
    int sum_square = 0;
    if(number_b > max){
        max = number_b;
        sum_square = number_a*number_a + number_c*number_c;
    }
    if(number_c > max){
        max = number_c;
        sum_square = number_a * number_a + number_b * number_b;
    }
    if(max == number_a){
        sum_square = number_b * number_b + number_c * number_c;
    }
    if(max * max == sum_square){
        printf("Pythagoras");
    }else{
        printf("Not Pythagoras");
    }
}
