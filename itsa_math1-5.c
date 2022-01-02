#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double a;
    scanf("%lf", &a);
    double cal=a*a;
    cal+=0.04;
    printf("%.1lf\n", cal);
}
