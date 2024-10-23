#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int AVG[N];
    int X,Y;
    int number = 0;
    double sum = 0;
    for(int i = 0; i < N; i++){
        scanf("%d",&AVG[i]);
    }
    scanf("%d%d",&X,&Y);
    for(int i = 0; i < N; i++){
        if(AVG[i] >= X && AVG[i] <= Y){
            number++;
            sum += AVG[i];
        }
    }
    if(number > 0){
      printf("%d\n",number);
    printf("%.2lf",sum / number);
    }else{
        printf("%d\n",number);
        printf("none");
    }

    return 0;
}
