#include<stdio.h>

void count(int i, int x){
    if(i<x){
        printf("%d+", i);
        count(i+1, x);
    }
}
int s(int x){
    if(x==1){
        return 1;
    }
    else{
        return s(x-1)+x;
    }
}
int m(int i){
    if(i==1){
        return 1;
    }
    else{
        return m(i-1)+i;
    }
}

int main(){
    int i, x, min=0, add=0;
    printf("�п�J�_�l�ȡG");
    scanf("%d", &i);
    printf("�п�J�̤j�ȡG");
    scanf("%d", &x);
    count(i, x);
    add=s(x);
    min=m(i);
    printf("%d\n�`�X���G%d\n", x, add-min+i);

    return 0;
}
