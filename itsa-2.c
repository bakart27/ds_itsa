#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int mile;
    double km;
    scanf("%d", mile);
    km=(double)mile*1.6;
    printf("%.1f\n", km);
}
