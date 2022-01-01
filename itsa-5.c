#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);
    int binary[8];
    if (num<0)
        num+=256;
    for(int i=7; i>=0; i--)
    {
        binary[i]=num%2;
        num/=2;
    }
    for(int i=0; i<8; i++)
        printf("%d", binary[i]);
    printf("\n");
}
