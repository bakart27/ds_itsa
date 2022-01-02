#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int down, height;
    scanf("%d %d", &down, &height);
    float cal=(float) down*height/2;
    printf("%.1f\n", cal);
}
