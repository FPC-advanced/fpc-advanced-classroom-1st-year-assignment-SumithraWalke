#include<stdio.h>
int input()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    return n;
}
int add(int a, int b)
{
    int add;
    add=a+b;
    return add;
}
void output(int a, int b, int sum)
{
    printf("the sum of %d and %d id %d",a,b,sum);

}
int main()
{
    int a,b,sum;
    a=input();
    b=input();
    sum=add(a,b);
    output(a,b,sum);
    return 0;

}