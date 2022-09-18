#include<stdio.h>

int main(){
    int a, b, i;
    printf("請輸入兩數之和：");
    scanf("%d", &a);
    printf("請輸入兩書之積：");
    scanf("%d", &b);
    for(i=1; 1<=a/2; i++){
        int j=a-i;
        if(i*j==b&&i<=j){
            printf("%d,%d\n", i, j);
        }
    }

    return 0;
}
llll
