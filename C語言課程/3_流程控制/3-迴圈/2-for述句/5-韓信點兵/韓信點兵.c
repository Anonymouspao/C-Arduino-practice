#include<stdio.h>

int main(){
    int a, b, num=0, max, rng;
    printf("�п�J�@�q��ƪ��d��G");
    scanf("%d%d", &a, &b);
    printf("�п�J�Q�n�D���Ȫ��d��G");
    scanf("%d", &rng);
    max=a;
    printf("�e%d�ӭȬ��G", rng);
    for(int i=a; i<=b; i++){
        if(i%3==2&&i%5==3&&i%7==2){
            if(i>=a){
                max=i;
            }
            num+=1;
            if(num<=rng){
                printf("%d ");
            }
        }
    }
    printf("\n�̤j�Ȭ��G%d\n", max);
    if(num==0){
        printf("�L");
    }

    return 0;
}
