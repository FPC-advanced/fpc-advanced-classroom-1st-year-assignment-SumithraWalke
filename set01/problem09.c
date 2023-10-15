#include<stdio.h>
#include<math.h>
float input()
{
    float n;
    printf("Enter number: ");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    return sqrt(n);
}
void output(float n,float sqrroot)
{
    printf("Square root of %f is %f",n ,sqrroot);
}
int main()
{
    float n,sqrot;
    n=input();
    sqrot=square_root(n);
    output(n,sqrot);
    return 0;
}