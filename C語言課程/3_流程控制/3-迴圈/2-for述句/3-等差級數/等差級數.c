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
    for(float i=a; i<=n; i+=d){
        sum+=i;
    }
    printf("%f", sum);
    return 0;
}
