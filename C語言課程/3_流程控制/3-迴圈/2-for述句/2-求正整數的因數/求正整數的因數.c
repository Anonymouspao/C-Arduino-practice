#include<stdio.h>

int main(){
    int num;
    printf("�п�J�@�ӥ���ơG");
    scanf("%d", &num);
    printf("%d�����]�Ʀ��G", num);
    for(int i=1; i<=num; i++){
        if(num%i==0){
            printf("%d ", i);
        }
    }

    return 0;
}
