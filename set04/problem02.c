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
{
    float p,q,r;
    p=a.num/a.den;
    q=b.num/b.den;
    r=c.num/c.den;
    if(p<q&&p<r)
    {
        return a;
    }else if(q<r)
    {
        return b;
    }else{
        return c;
    }
}
void output(Fraction a)