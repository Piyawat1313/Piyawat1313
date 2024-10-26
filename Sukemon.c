#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n <= 100000){
        int team1[n];
        int team2[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&team1[i]);
        }
        for(int i = 0; i < n; i++){
            scanf("%d",&team2[i]);
        }
        for(int i = 0; i < n;){    //loop team 1
            for(int j = 0; j < n;){   //loop team 2
                int cp1 =  team1[i];   // cp1 get team1
                int cp2 =  team2[j];   // cp2 get team 2
                if(cp1 > cp2){          // if team 1 win
                    printf("1\n");       // print 1
                    team1[i] -= team2[j];   // power team1 -= power team2 for down power team2
                    j++;        //next to character in team2
                }
                else if(cp2 > cp1){     //if team2 win
                    printf("2\n");
                    team2[j] -= team1[i];   //power team2 -= team1  for down power team1
                    i++;       // next to character in team 1
                }
                else{        // team1 draw team2
                    printf("0\n");
                    i++;    //next to character in team1 and team2
                    j++;
                }
            }
        }
    }

    return 0;
}
