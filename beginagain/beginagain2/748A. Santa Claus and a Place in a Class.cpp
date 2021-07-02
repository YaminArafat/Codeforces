#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0,l,d,k;
    cin>>n>>m>>k;
    for(int i=1; i<=n; i++)
    {
        if((i*m*2)<k)
            continue;
        if(i>1)
            cnt=i-1;
        //cout<<i<<" "<<cnt<<endl;
        for(int j=cnt*m*2+1, x=1; j<=i*m*2; j+=2,x++)
        {
            if(j==k||j+1==k)
            {
                cout<<i<<" "<<x<<" ";
                if(k%2)
                    cout<<"L"<<endl;
                else
                    cout<<"R"<<endl;
                return 0;
            }
        }
    }
}
