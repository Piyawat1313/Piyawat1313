#include<stdio.h>

void main(){
    int wage = 300, hour, day, count = 0, sum_wage = 0;
    scanf("%d", &day);
    for(int i = 0; i < day; i++){
        scanf("%d", &hour);
        if(hour >= 8){
            sum_wage += wage;
            if(hour > 8){
                int overtime = hour - 8;
                if(overtime > 12)
                    overtime = 12;
                sum_wage += overtime * 50;
            }
            count = 0; // Reset count if hours are 8 or more
        } else if(hour >= 4){
            sum_wage += 150;
            count = 0; // Reset count if hours are 4 or more
        } else {
            count++;
            if(count == 3){
                break; // Terminate if less than 4 hours for 3 consecutive days
            }
        }
    }
    printf("%d\n", sum_wage);
}
