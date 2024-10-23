#include <stdio.h>

int main() {
    int numberInteresting;//เลขที่สนใจ
    int number;//ตัวแปรที่เก็บเลขอีกตัวในloop
    int count;//ตัวแปลบวกเลขที่ซ้ำกัน
    
  //รับเลขที่สนใจมาก่อน
    printf("Enter numbers as your interesting:\n");
  
  
  scanf("%d", &numberInteresting);
    //รับเลขเข้ามาเรื่อยๆ จนกว่าจะเจอ0
  
  printf("Enter numbers (enter 0 to stop):\n");

    while(20) {
        scanf("%d", &number);
        //ถ้าnumberที่รับมามี0
        if (number == 0) {
           
            break; // Exit the loop if the number is 0           //หยุดการทำงานของลูป
           
        } else if (number == numberInteresting) {           //เลขที่รับเข้ามา ซ้ำกับเลขที่สนใจมั้ย
           
            count++;        //บวกเลขซ้ำ
        }
        
        printf("You entered: %d\n", number);       //รับเลขเข้ามาเรื่อยๆ
    }

    printf("Program already end:\n");
    if (count == 0) {                    //ภ้าตัวที่นับเลขซ้ำไม่มีตัวซ้ำ
        printf("None");
    } else {
        printf("Result %d:", count);          //ไม่มีปริ้นผลลัพธิ์ออกมา
    }

    return 0;
}

}
