#include<stdio.h>
void input(int *a, int *b)
{
    printf("enter the 1st number:");
    scanf("%d",a);
     printf("enter the 2nd number:");
    scanf("%d",b);

}
void add(int a, int b, int *sum)
{
    *sum=a+b;
 
}
void output(int a, int b, int sum)
{
    printf("the sum of %d and %d id %d",a,b,sum);

}
int main()
{
    int a,b,sum;
    input(&a,&b);
    add(a,b,&sum);
    output(a,b,sum);
    return 0;

}