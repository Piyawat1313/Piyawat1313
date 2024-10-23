#include<stdio.h>
void main(){
    int num=0;
    
  int max=-1;
  
  int min=50001;
  
  int num1=0;
  
  int i=0;
  
  for(;;){
    scanf("%d",&num1);
    
    if(num1<=0){
        break;
    }if(num1%2!=0){
        if(num1>max){
            max=num1;
        }if(num1<min){
            min=num1;

            }
        }
    }
    printf("%d\n%d\n%d",max,min,max-min);
}

