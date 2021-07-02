#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,sum=10,count=0,x=9,y=1,a=9,i=0,j;
    cin>>k;
    int arr[k];
    while(count!=109)
    {
        sum+=9;
        count++;
        //cout<<sum<<" "<<count<<" "<<x<<" "<<y<<" "<<a<<endl;
        if (count==x)
        {
            if(count==k)
            {
                cout<<sum<<endl;
                break;
            }
            if(x==63)
            {
                y++;
            }
            if(x==64)
            {
                y=0;
                a=9;
            }
            sum+=y*9;
            if(x==9)
                x+=10;
            else if (x==73)
            {
                x+=10;
            }
            else if (x==83)
            {
                //x+=10;
                a=9;
            }
            else
            {
                x+=a;
                a--;
                y++;
            }
        }
        if(count==k)
        {
            cout<<sum<<endl;
            break;
        }
    }
    return 0;
}
