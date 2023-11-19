#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter the first fraction:\n");
    scanf("%d%d",num1,den1);
    printf("Enter the second fraction:\n");
    scanf("%d%d",num2,den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    *res_num=(num1*den2)+(num2)
}