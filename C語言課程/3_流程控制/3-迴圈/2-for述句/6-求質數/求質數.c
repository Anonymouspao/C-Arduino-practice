#include<stdio.h>

int main(){
    int num, i, n=0;
    do{
        printf("請輸入大於1的整數（0結束）：");
        scanf("%d", &num);
        if(num==0){
            break;
        }
        for(i=num-1; i>=2; i--){
            if(num%i==0){
                n=1;
                break;
            }
            else{
                n=0;
            }
        }
        if(n==1){
            printf("%d不是質數\n", num);
        }
        else{
            printf("%d是質數\n", num);
        }
    }while(num!=0);

    return 0;
}
