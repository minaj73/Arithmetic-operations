#include<stdio.h>
#include<conio.h>
int main()
{

    int no1,no2,sum,sub,mul,div,mod;
    printf("enter two numbers");
    scanf("%d%d",&no1,&no2);
    sum=no1+no2;
    printf("sum=%d",sum);
    sub=no1-no2;
    printf("sub=%d",sub);
    mul=no1*no2;
    printf("mul=%d",mul);
    div=no1/no2;
    printf("div=%d",div);
    mod=no1%no2;
    printf("mod=%d",mod);
    return 0;
}
