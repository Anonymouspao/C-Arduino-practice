#include<stdio.h>

int main(){
    float a, b, c, max, min, mid;
    printf("請輸入三個數：");
    scanf("%f%f%f",&a, &b, &c);
    if(a>=b&&a>=c){
        max=a;
        if(b>c){
            min=c;
            mid=b;
        }
        else{
            min=b;
            mid=c;
        }
    }
    if(b>a&&b>=c){
        max=b;
        if(a>c){
            min=c;
            mid=a;
        }
        else{
            min=a;
            mid=c;
        }
    }
    if(c>a&&c>b){
        max=c;
        if(a>b){
            min=b;
            mid=a;
        }
        else{
            min=a;
            mid=b;
        }
    }
    printf("%g,%g,%g",min, mid, max);

    return 0;
}

