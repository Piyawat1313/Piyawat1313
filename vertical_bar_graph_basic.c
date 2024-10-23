#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int number[n];
  for(int i = 0; i < n; i++){
    scanf("%d",&number[i]);
  }
  int height = 0;
  for(int i = 0; i < n; i++){
    if(number[i] > height){
        height = number[i];
    }
  }
  for(int i = height; i>= 0; i--){
    for(int j = 0; j < n; j++){
        if(number[j] > i){
            printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
  }
   return 0;
}
