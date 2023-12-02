#include<stdio.h>
typedef struct{
    int num,den;
}Fraction;

Fraction input()
{
Fraction a;
printf("Enter the numerator and the denominator of thr number:");
scanf("%d %d",&a.num,&a.den);
return a;
}
Fraction smallest(Fraction a,Fraction b,fraction c)