#include<stdio.h>

int main(){
    int a, b, n;
    printf("�п�J��ƽd��G");
    scanf("%d%d", &a, &b);
    printf("�п�J�n�R������ƻP�䭿�ơG");
    scanf("%d", &n);
    for(int i=a; i<=b; i++){
        if(i%n!=0){
            printf("%d ", i);
        }
    }

    return 0;
}
