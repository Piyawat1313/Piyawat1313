#include<stdio.h>
#include <limits.h>
#include<string.h>
struct
{
    char name[51];
    int score;
    int goalFor;
    int goalAgainst;
    int goalDiff;
} typedef TEAM;

/*int calculateGoalDiff(struct TEAM team[], int k)
{
    //ต้องการเอาค่าทีมมาวนลูปแสดงผลทั้งหมด
}*/


/*struct{
    int home_team;
    int away_team;
    int home_score;
    int away_score;
} typedef MATCH;*/

int main()
{
    int k;
    scanf("%d",&k);
    TEAM T[k + 1];
    int home_team;
    int away_team;
    int home_score;
    int away_score;
    char temp[10];// สองบรรทัดนี้เอาไว้กำจัด new line และ carriage return ที่เกินเข้ามา
    gets(temp);
    for(int i = 1; i <= k; i++)
    {
        gets(T[i].name);
        T[i].score = 0;
        T[i].goalFor = 0;
        T[i].goalAgainst = 0;
        T[i].goalDiff = 0;
    }
    for(int i = 1; i <= k * (k - 1); i++)
    {
        scanf("%d%d%d%d",&home_team, &away_team, &home_score, &away_score);

        //calculateScore
        if(home_score > away_score)
        {
            T[home_team].score +=3;
        }
        else if(away_score > home_score)
        {
            T[away_team].score +=3;
        }
        else if(home_score == away_score)
        {
            T[home_team].score +=1;
            T[away_team].score +=1;
        }

        //calculateGoalFor
        T[home_team].goalFor +=home_score;
        T[away_team].goalFor +=away_score;

        //calculateGoalAgainst
        T[home_team].goalAgainst +=away_score;
        T[away_team].goalAgainst +=home_score;

    }

    //calculateGoalDiff
    for(int i = 1; i <= k; i++)
    {
        T[i].goalDiff = T[i].goalFor - T[i].goalAgainst;
    }
    int max_score = 0;
    int max_goalFor = 0;
    int max_goalDiff = 0;
    for(int i = 1; i <= k; i++)
    {
        if(T[i].score >= max_score)
        {
            max_score = T[i].score;
        }
        if(T[i].goalFor >= max_goalFor)
        {
            max_goalFor = T[i].goalFor;
        }
        if(T[i].goalDiff >= max_goalDiff)
        {
            max_goalDiff = T[i].goalDiff;
        }
    }
    for(int i = 1; i <= k; i++)
    {
        if(T[i].score == max_score)
        {
            printf("%s\n",T[i].name);
        }
    }
    for(int i = 1; i <= k; i++)
    {
        if(T[i].goalFor == max_goalFor)
        {
            printf("%s\n",T[i].name);

        }
    }
    for(int i = 1; i <= k; i++)
    {
        if(T[i].goalDiff == max_goalDiff)
        {
            printf("%s\n",T[i].name);
        }
    }
    return 0;
}
