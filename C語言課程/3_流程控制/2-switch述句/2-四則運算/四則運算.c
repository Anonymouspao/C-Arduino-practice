#include<stdio.h>

int main(){
    int num1, num2;
    char ccl;
    float ans;
    printf("�п�J�@��ƾǦ��G");
    scanf("%d%c%d", &num1, &ccl, &num2);
    switch(ccl){
        case '+':
            ans=num1+num2;
            break;
        case '-':
            ans=num1-num2;
            break;
        case '*':
            ans=num1*num2;
            break;
        case '/':
            ans=(float)num1/num2;
            break;
        default:
            printf("error");
            break;
    }
    printf("%f",ans);

    return 0;
}

