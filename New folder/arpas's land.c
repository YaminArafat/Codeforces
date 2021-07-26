#include <stdio.h>
#include <math.h>
int main()
{
    long long int n,num;
    float value;
    scanf("%lld",&n);
    num=pow(1378,n);
    if (n < 2)
    {
        value=(num)%10;
    }
    else
    {
        value=(num+1)%10;
    }
    printf("%d\n",(int)value);
    return 0;
}
