#include<stdio.h>

int main(){
    float a, b, c, max, min;
    printf("�п�J�T�ӼơG");
    scanf("%f%f%f",&a, &b, &c);
    if(a>=b&&a>=c){
        max=a;
        if(b>c){
            min=c;
        }
        else{
            min=b;
        }
    }
    if(b>a&&b>=c){
        max=b;
        if(a>c){
            min=c;
        }
        else{
            min=a;
        }
    }
    if(c>a&&c>b){
        max=c;
        if(a>b){
            min=b;
        }
        else{
            min=a;
        }
    }
    printf("�̤j�Ȭ��G%f""�̤p�Ȭ��G%f",max, min);

    return 0;
}
