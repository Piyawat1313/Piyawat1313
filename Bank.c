#include <stdio.h>
int main(){
char username[10] , password[10];
  int choice;
  printf("Username = ");
  scanf("%s",&username);
  printf("Password = ");
  scanf("%s",&password);
  if(strcmp(username,"member")  == 0 && strcmp(password,"1234") == 0){
    //เงื่อนไขหลัก
    //strcmp = ใช้ในการเปรียบเทียบข้อความ
    printf("Login complete\n");
    //nested if
    printf("Select Choice(1-2 ):");
    scanf("%d",&choice);
    if(choice == 1){
        printf("Withdraw\n");
    } else if (choice==2){
    printf("deposit\n");
    }else{
    printf("Logout\n");
    }

  }else{
  printf("Not Found\n");
  }
}


