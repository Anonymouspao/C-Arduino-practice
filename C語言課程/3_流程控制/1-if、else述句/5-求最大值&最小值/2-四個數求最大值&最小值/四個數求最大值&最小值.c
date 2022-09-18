#include<stdio.h>

int main(){
    float a, b, c, d, max, min;
    printf("請輸入四個數：");
    scanf("%f%f%f%f",&a, &b, &c, &d);
    if(a>=b&&a>=c&&a>=d){
        max=a;
        if(b>=c&&b>=d){
            if(c>=d){
                min=d;
            }
            else{
                min=c;
            }
        }
        else{
            min=b;
        }
    }
    if(b>a&&b>c&&b>d){
        max=b;
        if(a>c&&a>d){
            if(c>d){
                min=d;
            }
            else{
                min=c;
            }
        }
        else{
            min=a;
        }
    }
    if(c>a&&c>b&&c>d){
        max=c;
        if(a>b&&a>d){
            if(b>=d){
                min=d;
            }
            else{
                min=b;
            }
        }
        else{
            min=a;
        }
    }
    if(d>a&&d>b&&d>c){
        max=d;
        if(a>b&&a>c){
            if(b>c){
                min=c;
            }
            else{
                min=b;
            }
        }
        else{
            min=a;
        }
    }
    printf("最大值為：%f""最小值為：%f",max, min);

    return 0;
}
