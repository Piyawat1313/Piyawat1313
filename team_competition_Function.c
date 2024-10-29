#include<stdio.h>
void print_score(int win1, int win2){
    if(win1 > win2){
            printf("Team 1 wins\n");
            printf("Score %d to %d",win1,win2);
        }
        else if(win2 > win1){
            printf("Team 2 wins\n");
            printf("Score %d to %d",win2,win1);
        }
        else{
            printf("Draw game\n");
            printf("Score %d to %d",win2,win1);
        }
}
void main(){
    int N;
    scanf("%d",&N);
    if(N <= 1000){
        int team1[N];
        int team2[N];
        for(int i = 0;i < N; i++){
            scanf("%d",&team1[i]);
        }
        for(int i = 0; i < N; i++){
            scanf("%d",&team2[i]);
        }
        int win1 = 0;
        int win2 = 0;
        for(int i = 0; i < N; i++){
            if(team1[i] > team2[i]){
                    win1 += 2;
            }
            else if(team2[i] > team1[i]){
                win2 += 2;
            }
            else{
                win1 += 1;
                win2 += 1;
            }
        }
        print_score(win1,win2);
    }
    return 0;
}
