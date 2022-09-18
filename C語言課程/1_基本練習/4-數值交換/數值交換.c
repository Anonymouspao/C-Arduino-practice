#include<stdio.h>

int main(){
    int num1, num2, x;
    printf("please enter an integer:");
    scanf("%d", &num1);
    printf("please enter another integer:");
    scanf("%d", &num2);
    x=num1;
    num1=num2;
    num2=x;
    printf("%d, ", num1);
    printf("%d", num2);

    return 0;
}
