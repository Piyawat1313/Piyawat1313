#include<stdio.h>
int main(){
    int day, people;
    int sum = 0;
    int income_h[people][day];
    int max_income = 0, min_income = 0;
    int max_index = 0, min_index = 0;
    int Total_income[people];
    scanf("%d%d",&day,&people);
    if(people <= 50 && day <= 300){
       for(int i = 0; i < people; i++){
            Total_income[i] = 0;
            for(int j = 0; j < day; j++){
                scanf("%d",&income_h[i][j]);
                int hour;
                if(income_h[i][j] > 10){
                    hour = 10;
                }else{
                    hour = income_h[i][j];
                }
                Total_income[i] += hour * 40;
                sum += hour * 40;
            }
        }
        max_income = Total_income[0];
        min_income = Total_income[0];
        max_index = 0;
        min_index = 0;
        for(int i = 0; i < people; i++){
            if(Total_income[i] > max_income){
                max_income = Total_income[i];
                max_index = i;
                printf("Max_Index : %d\n",max_index);
                break;
            }
            if(Total_income[i] < min_income){
                min_income = Total_income[i];
                min_index = i;
                break;
            }
        }
       printf("sum : %d\n",sum);
       printf("Income person : %d\n",max_index);
       printf("Income person min : %d",min_index + 1);
    }
    return 0;
}
