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
    *res_num=(num1*den2)+(num2*den1);
    *res_den=(den1*den2);
    for (int i = 1; i <= x && i <= y; ++i){
        if (x % i == 0 && y % i == 0){
            gcd = i;
        }
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf(" Sum of %d/%d and %d/%d = %d/%d\n", num1, den1, num2, den2, res_num, res_den);
}
int main()
{
    int num1,num2,den1,den2,res_num,res_den;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&res_num,&res_den);
    output(num1,den1,num2,den2,res_num,res_den);
    return 0;
}