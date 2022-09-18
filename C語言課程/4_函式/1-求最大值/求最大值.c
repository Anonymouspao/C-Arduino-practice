#include<stdio.h>

int max(int x, int y){
    int max;
    if(x>=y){
        max=x;
    }
    else{
        max=y;
    }

    return max;
}

int main(){
    int x, y, M;
    scanf("%d%d", &x, &y);
    M=max(x, y);
    printf("%d", M);

    return 0;
}
