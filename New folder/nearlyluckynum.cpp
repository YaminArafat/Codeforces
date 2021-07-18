#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    long long int num,count=0,digit;
    cin>>num;
    while (num != 0)
    {
        digit=num%10;
        if (digit == 7 || digit == 4)
        {
            count++;
        }
        num=num/10;
    }
    if (count == 4 || count == 7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
