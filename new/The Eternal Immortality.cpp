#include <iostream>
using namespace std;
int main()
{
    long long int a,b,i,x,y;
    int ans=1;
    cin>>a>>b;
    //cout<<a<<b<<endl;
    /*if ((a>20))
    {
        x=a%10;
    }
    else
    {
        x=a;
    }
    if ((b>20))
    {
        y=b%10;
    }
    else
    {
        y=b;
    }
    //cout<<x<<y<<endl;
    if (x==0 && y==0)
    {
        cout<<"0"<<endl;
    }
    else if (a==b)
    {
        cout<<"1"<<endl;
    }
    else if (x>y)
    {
        cout<<"0"<<endl;
    }
   /* else if (x>y)
    {
        cout<<"0"<<endl;
    }*/
   // else
   // {
        for (i=b; i>a && ans!=0 ; i--)
        {
            ans=ans*i%10;
        }
        cout<<ans<<endl;
  //  }
    return 0;
}
