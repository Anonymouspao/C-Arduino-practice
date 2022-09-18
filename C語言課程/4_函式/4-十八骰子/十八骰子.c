#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int dice[4];
    for(int i=1; i<=3; i++){
        dice[i]=rand()%6+1;
    }
    for(int j=1; j<=3; j++){
        printf("¡G\n%d ", dice[j]);
    }

    return 0;
}

