#include<stdio.h>

int main(){
    int a, n;
    float d, sum=0;
    printf("�п�J�����G");
    scanf("%d",&a);
    printf("�п�J�����G");
    scanf("%d",&n);
    printf("�п�J���t�G");
    scanf("%f",&d);
    while(a<=n){
        sum+=a;
        a+=d;
    }
    printf("%f", sum);
    return 0;
}

