#include<stdio.h>

int main(){
    int a, b, c;
    printf("�п�J�T���Ϊ��T������G");
    scanf("%d%d%d",&a, &b, &c);
    if(a+b>c&b+c>a&a+c>b){
        if(a==b&b==c&a==c){
            printf("���T����");
        }
        else if(a==b||b==c||a==c){
            printf("���y�T����");
            if(a*a+b*b==c*c){
                printf("���y�����T����");
            }
        }
        else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b){
            printf("�����T����");
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
