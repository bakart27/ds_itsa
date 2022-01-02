#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int up, down, height;
    scanf("%d %d %d", up, down, height);
    float cal=(float)(up+down)*height/2;
    printf("%.1f\n", cal);
}
