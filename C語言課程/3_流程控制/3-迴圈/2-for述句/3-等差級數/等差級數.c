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
    for(float i=a; i<=n; i+=d){
        sum+=i;
    }
    printf("%f", sum);
    return 0;
}
