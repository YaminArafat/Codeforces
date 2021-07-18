#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int num,mod1,mod2,dnum;
    cin>>num;
    if (num>0)
    {
        cout<<num<<endl;
    }
    else if (num<0)
    {
        mod1=num%10;
        dnum=num/10;
        mod2=dnum%10;
        if (abs(mod1)>abs(mod2))
        {
            cout<<dnum<<endl;
        }
        else if (abs(mod2)>abs(mod1))
        {
            if ((dnum/10)==0)
            {
                cout<<mod1<<endl;
            }
            else
            {
                cout<<dnum/10<<abs(mod1)<<endl;
            }
        }
        else if (abs(mod2)==abs(mod1))
        {
            cout<<dnum<<endl;
        }
    }
    return 0;
}
