#include<stdio.h>

int main(){
    int a, n;
    float d, sum=0;
    printf("請輸入首項：");
    scanf("%d",&a);
    printf("請輸入末項：");
    scanf("%d",&n);
    printf("請輸入公差：");
    scanf("%f",&d);
    while(a<=n){
        sum+=a;
        a+=d;
    }
    printf("%f", sum);
    return 0;
}

