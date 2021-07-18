//After trying fucking 11 times with this simple problem
#include <stdio.h>
int main()
{
 long long int n,m,a;
    scanf("%I64d %I64d %I64d",&n,&m,&a);
    if (n % a != 0)
    {
        n=(n/a)+1;
    }
    else
    {
        n=(n/a);
    }
    if (m % a != 0)
    {
        m=(m/a)+1;
    }
    else
    {
        m=(m/a);
    }
    printf("%I64d\n",n*m);
    return 0;
}
//Fuck
/*if (n == m)
    {
        if (n % a == 0)
        {
            printf("%I64d\n",((n/a)*(n/a)));
        }
        else
        {
            printf("%I64d\n",(((n/a)+1)*((n/a)+1)));
        }
    }
else if (n > m)
    {
        if (n > a)
        {
            if (n % a == 0 && a != 1)
            {
                printf("%I64d\n",((m/a)*(n/a)));
            }
            else
            {
                printf("%I64d\n",(((n/a)+1)*(((m/a)))));
            }
        }
        else
        {
            printf("1\n");
        }
    }
    else if (n < m)
    {
        if (m > a)
        {
            if (m % a == 0 && a != 1)
            {
                printf("%I64d\n",((m/a)*(n/a)));
            }
            else
            {
                printf("%I64d\n",(((m/a)+1)*(((n/a)))));
            }
        }
        else
        {
            printf("1\n");
        }
    }*/
