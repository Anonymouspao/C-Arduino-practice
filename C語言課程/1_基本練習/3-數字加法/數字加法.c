#include<stdio.h>

int main(){
    int num1, num2, sum;
    printf("please enter an integer:");
    scanf("%d", &num1);     //Ū��(�@�Ӣ̦��,�s�bnum1����m)
    printf("please enter another integer:");
    scanf("%d", &num2);
    sum=num1+num2;
    printf("sum of the number is:%d", sum);     //�g�X(sum of the number is:�@�Ӣ̦��=sum)

    return 0;
}
