#include<stdio.h>

int main(){
    int a, b, c, avg1;

    printf("�п�J�T�ӼƭȡG");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    avg1=(a+b+c)/3;
    printf("�T�Ӽƪ������Ȭ��G%d\n",avg1);

    float d, e, f, avg2;

    printf("�п�J�T�ӼƭȡG");
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);
    avg2=(a+b+c)/3;                         //"3"����ơA�ݥ��ন�B�I�Ƥ~�వ�B��
    printf("�T�Ӽƪ������Ȭ��G%f\n",avg2);

    float g, h, i, avg3;

    printf("�п�J�T�ӼƭȡG");
    scanf("%f", &g);
    scanf("%f", &h);
    scanf("%f", &i);
    avg3=(a+b+c)/3.;                        //"3."���B�I��
    printf("�T�Ӽƪ������Ȭ��G%f\n",avg3);

    return 0;
}
