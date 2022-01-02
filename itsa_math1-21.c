#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int cal=1;
    for(int i=1; i<=n; i++)
        cal*=i;
    printf("%lli\n", cal);
}
