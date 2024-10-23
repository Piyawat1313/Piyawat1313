#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int number[N];
    int temp;
    if(N <= 5000){
        for(int i = 0; i < N; i++){
            scanf("%d",&number[i]);
        }
        int newsize = N;
        int temp;
        for(int i = 0; i < newsize; i++){
            for(int j =  i + 1; j < newsize;){
                if(number[i] == number[j]){
                    for(int m = j; m < newsize - 1; m++){
                        number[m] = number[m + 1];
                    }
                    newsize--;
                }else{
                    j++;
                }
            }
        }
        for(int i = 0; i < newsize - 1; i++){
            for(int j = 0; j < newsize - i - 1; j++){
                if(number[j] > number[j + 1]){
                    temp = number[j];
                    number[j] = number[j + 1];
                    number[j + 1] = temp;
                }
            }
        }
        for(int i = 0; i < newsize; i++){
            printf("%d ",number[i]);
        }
    }

   


/* int N ,i, num[10001];
    int points;
    for(int i = 0; i < 10000; i++){
        num[i] = 0;
    }
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        scanf("%d",&points);
        num[points] += 1;
    }
    for(int i = 0; i <= 10000; i++){
        if(num[i] > 0){
            printf("%d ",i);
        }
    }*/
    return 0;

}
