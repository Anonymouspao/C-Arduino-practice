#include<stdio.h>

int main(){
    int a, b, c;
    printf("�п�J�T���Ϊ��T�Ӥ����G");
    scanf("%d%d%d", &a, &b, &c);
    if(a+b+c==180){
        if(a==b&b==c&a==c){
            printf("���T����");
        }
        else if(a==b||b==c||a==c){
            printf("���y�T����");
        }
        else{
            printf("��L�T����");
        }
    }
    else{
        printf("��J���~");
    }

    return 0;
}
