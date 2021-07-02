#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum=0,temp,f=1;
    cin>>n;
    int line[n];
    for(i=0;i<n;i++)
    {
        cin>>line[i];
    }
    if(line[0]>25)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(line[i]==25)
            {
                sum+=line[i];
            }
            else
            {
                temp=line[i]-25;
                if(sum>=temp)
                {
                    sum-=temp;
                    sum+=line[i];
                }
                else
                {
                    cout<<"NO"<<endl;
                    f=0;
                    break;
                }
            }
        }
        if(f && sum>=0)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
