#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    unsigned int cal=1;
    if(a>=31)
        printf("Value of more than 31\n");
    else
    {
        for(int i=0; i<a; i++)
            cal*=2;
        printf("%d\n", cal);
    }
}
