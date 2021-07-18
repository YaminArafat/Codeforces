#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
using namespace std;
int main()
{
    int a,b,c,d,count=0;
    cin>>a>>b;
    d=a;
    while (d/b >=b)
    {
        d=d/b;
        if (d>=b)
        {
            count++;
        }
    }
    cout<<a+count+d<<endl;
    return 0;
}
