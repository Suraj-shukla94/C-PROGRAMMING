#include <stdio.h>
int main()
{
    float principal, rate, time, s_i;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    s_i = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", s_i);
    return 0;
}
