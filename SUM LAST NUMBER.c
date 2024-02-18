#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d",& N,M);
    int last_digits_N= N%10;//It calculates the last digit of the number N using the modulo operator % and stores it in the variable last_digits_N.
    int last_digits_M= M%10;//It calculates the last digit of the number M using the modulo operator % and stores it in the variable last_digits_M.
    int sum = last_digits_N + last_digits_M;
    printf(" summation=   %d",sum);
    return 0;
}

