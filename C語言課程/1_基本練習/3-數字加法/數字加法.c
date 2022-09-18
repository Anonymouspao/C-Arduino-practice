#include<stdio.h>

int main(){
    int num1, num2, sum;
    printf("please enter an integer:");
    scanf("%d", &num1);     //讀取(一個十位數,存在num1的位置)
    printf("please enter another integer:");
    scanf("%d", &num2);
    sum=num1+num2;
    printf("sum of the number is:%d", sum);     //寫出(sum of the number is:一個十位數=sum)

    return 0;
}
