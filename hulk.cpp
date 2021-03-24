#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{

    int n,i;
    char str1[15]="I hate it ";
    char str2[10001]="I hate that ";
    char str3[25]="I hate that I love it ";
    cin>>n;
    if (n == 1)
    {
        cout<<str1<<endl;
    }
    else if (n == 2)
    {
        cout<<str3<<endl;
    }
    else if (n%2==0 && n>2 && n!=1 && n!=2)
    {
        for (i=1; i<n;)
        {
            strcat(str2, "I love that ");
            i++;
            if (i == n && i>n)
            {
                break;
            }
            else if (i<(n))
            {
                strcat(str2, "I hate that ");
            }
            i++;
            if (i == n-1)
            {
                strcat(str2, "I love it ");
                i++;
            }
            if (i>n)
            {
                break;
            }
        }
        cout<<str2<<endl;
    }
    else if (n%2!=0 && n>2 && n!=1 && n!=2)
    {
        for (i=1; i<n;)
        {
            strcat(str2, "I love that ");
            i++;
            if (i == n && i>n)
            {
                break;
            }
            else if (i<(n-1))
            {
                strcat(str2, "I hate that ");
            }
            i++;
            if (i == n)
            {
                strcat(str2, "I hate it ");
                i++;
            }
            if (i>n)
            {
                break;
            }
        }
        cout<<str2<<endl;
    }
    return 0;
}
