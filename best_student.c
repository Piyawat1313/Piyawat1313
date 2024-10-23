#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char id_stu[n][9];
    char name[n][31];
    char last_name[n][51];
    double grade[n];
    for(int i = 0; i < n; i++){
        scanf("%s %s %s %lf",id_stu[i], name[i], last_name[i], &grade[i]);
    }
    int max_index = 0;
   for(int i = 1; i < n; i++){
        if(grade[i] > grade[max_index]){
            max_index = i;
        }
   }
   printf("\n");
    printf("%s %s %s %.2lf",id_stu[max_index], name[max_index], last_name[max_index], grade[max_index]);
    return 0;
}
