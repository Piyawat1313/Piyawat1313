#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int loop_num[number][2];
    int count = 0;
    for(int i = 0; i < number - 1; i++){
        scanf("%d",&loop_num[i]);
        for(int j = 0; j < number; j++){
            if(loop_num[i] == loop_num[j]){
                count++;
                printf("%d\n",count);
            }
        }
    }


    return 0;
}
