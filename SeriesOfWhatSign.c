 #include<stdio.h>
void main(){
    //input
    int a1,a2,a3,a4;
    int aj_minus2,aj_minus4;
    int aj=0,sum_aj_minus2=0,sum_aj_minus4=0;
    scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
    if ((a1>=-10 && a1<=10) &&
        (a2>=-10 && a2<=10) &&
        (a3>=-10 && a3<=10) &&
        (a4>=-10 && a4<=10))
    {
        int n;
        int result = a1+a2+a3+a4;
        scanf("%d",&n);
        if(n>=4 && n<60){
            for(int i=5;i<=n;i++){
                if(i-2 == 3){
                    aj_minus2 = a3;
                }else if(i-2 == 4){
                    aj_minus2 = a4;
                }else{
                    aj_minus2 = aj;
                }

                if(i-4 == 1){
                    aj_minus4 = a1;
                }else if(i-4 == 2){
                    aj_minus4 = a2;
                }else if(i-4 == 3){
                    aj_minus4 = a3;
                }else if(i-4 == 4){
                    aj_minus4 = a4;
                }else{
                    aj_minus4 = aj;
                }
                     aj = (aj_minus2 + aj_minus4)*5/4;
                     if (aj % 2 != 0) {
                         aj = -aj;
                     }
                      result += aj;
                     printf("aj_minus2 = %d\n",aj_minus2);
                     printf("aj_minus4 = %d\n",aj_minus4);
                     printf("aj = %d\n",aj);
                     printf("i = %d\n",i);
                }
            }
            printf("Result = %d\n",result);
        }

    }


