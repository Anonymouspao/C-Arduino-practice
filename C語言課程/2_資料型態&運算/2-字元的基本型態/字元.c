#include<stdio.h>

int main(){
    char letter;
    printf("�п�J�@�Ӥj�g�^��r���G");
    scanf("%c",&letter);
    printf("�A��J���r���O�G%c\n",letter);
    letter=letter+32;                       //�r��"char"�O��ASCII�榡�A��r���s��(�ܦ����)�A�i�@�[��
    printf("�p�g�O�G%c",letter);

    return 0;
}
