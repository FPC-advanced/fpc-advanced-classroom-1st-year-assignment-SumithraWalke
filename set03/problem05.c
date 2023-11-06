#include<stdio.h>
int input_array_size()
{
    int n;
    printf("Enter the array size:");
    scanf("%d",n);
    return n;
}
void init_array(int n,int a[n])
{
    for(int i=2;i<=n;i++)
    {
        a[i]=1;
    }
}
void erotosthenes_sieve(int n,int a[n])
{
    
}