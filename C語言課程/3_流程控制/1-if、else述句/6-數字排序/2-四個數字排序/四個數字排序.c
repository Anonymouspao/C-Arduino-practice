#include<stdio.h>

int main(){
    float a, b, c, d, int1=0, int2=0, int3=0, int4=0;
    printf("請輸入四個數：");
    scanf("%f%f%f%f",&a, &b, &c, &d);
    if(a>=b&&a>=c&&a>=d){
        int1=a;
        if(b>=c&&b>=d){
            int2=b;
            if(c>=d){
                int4=d;
                int3=c;
            }
            else{
                int4=c;
                int3=d;
            }
        }
        if(c>=b&&c>=d){
            int2=c;
            if(b>=d){
                int4=d;
                int3=b;
            }
            else{
                int4=b;
                int3=d;
            }
        }
        if(d>=b&&d>=c){
            int2=d;
            if(b>=c){
                int4=c;
                int3=b;
            }
            else{
                int4=b;
                int3=c;
            }
        }
    }
    else if(b>=a&&b>=c&&b>=d){
        int1=b;
        if(a>=c&&a>=d){
            int2=a;
            if(c>=d){
                int4=d;
                int3=c;
            }
            else{
                int4=c;
                int3=d;
            }
        }
        if(c>=a&&c>=d){
            int2=c;
            if(a>=d){
                int4=d;
                int3=a;
            }
            else{
                int4=a;
                int3=d;
            }
        }
        if(d>=a&&d>=c){
            int2=d;
            if(a>=c){
                int4=c;
                int3=a;
            }
            else{
                int4=a;
                int3=c;
            }
        }
    }
    else if(c>=b&&c>=a&&c>=d){
        int1=c;
        if(b>=c&&b>=d){
            int2=b;
            if(c>=d){
                int4=d;
                int3=c;
            }
            else{
                int4=c;
                int3=d;
            }
        }
        if(a>=b&&a>=d){
            int2=a;
            if(b>=d){
                int4=d;
                int3=b;
            }
            else{
                int4=b;
                int3=d;
            }
        }
        if(d>=a&&d>=b){
            int2=d;
            if(a>=b){
                int4=b;
                int3=a;
            }
            else{
                int4=a;
                int3=b;
            }
        }
    }
    else if(d>=b&&d>=c&&d>=a){
        int1=d;
        if(b>=c&&b>=a){
            int2=b;
            if(c>=a){
                int4=a;
                int3=c;
            }
            else{
                int4=c;
                int3=a;
            }
        }
        if(c>=b&&c>=a){
            int2=c;
            if(b>=a){
                int4=a;
                int3=b;
            }
            else{
                int4=b;
                int3=a;
            }
        }
        if(a>=b&&a>=c){
            int2=a;
            if(b>=c){
                int4=c;
                int3=b;
            }
            else{
                int4=b;
                int3=c;
            }
        }
    }
    printf("%g,%g,%g,%g",int4,int3,int2,int1);

    return 0;
}
