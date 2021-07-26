#include <bits/stdc++.h>
using namespace std;
int arr[300005];
int main()
{
    int n,m,a,b,mx=-1,mn=INT_MAX,x=-1,y=-1,f=0,cnt_y=0,cnt_x=0,keep=-1;
    cin>>n>>m;
    vector<int>vec;
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        if(x==-1&&y==-1)
        {
            x=a;
            y=b;
        }
        else if(x!=b && y==a)
        {
            cnt_y++;
            x=y;
            y=-1;
        }
        else if(x==b && y!=a)
        {
            cnt_x++;
            y=-1;
        }
        else if(x!=a && y!=b)
        {
            if(y==-1)
                y=a,keep=b;
            else
            {
                if(a!=keep && b!=keep && keep!=-1)
                {
                    f=1;
                }
                else
                {
                    if(keep!=-1)
                        y=keep;
                }
            }
        }
    }
    if(f)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
