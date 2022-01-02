#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float big, small, num[10];
    for(int i=0; i<10; i++)
        scanf("%f", &num[i]);
    big=num[0];
    small=num[0];
    for(int i=0; i<10; i++)
    {
        if(num[i]>big)
            big=num[i];
        if(num[i]<small)
            small=num[i];
    }
    printf("maximum:%.2f\n", big);
    printf("minimum:%.2f\n", small);
}
