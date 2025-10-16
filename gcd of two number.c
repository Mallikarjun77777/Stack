#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b)
{
    if(a==b) return a;
    else if (a>b)
        return gcd(a-b,b);
    return gcd(b,a);
}
int main()
{
    int a,b;
    printf("\n Read value for a and b:");
    scanf("%d%d",&a,&b);
    printf("\n GCD of %d and %d is:%d\n",a,b,gcd(a,b));
    return 0;
}
