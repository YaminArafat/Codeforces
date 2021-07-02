#include <bits/stdc++.h>
using namespace std;
bool st[10000];
int main()
{
    int strngth,n_lvl,i,k=0,j,f=0;
    cin>>strngth>>n_lvl;
    int drgn_strngth[n_lvl];
    int bonus[n_lvl];
    for (i=0; i<n_lvl; i++)
    {
        cin>>drgn_strngth[i]>>bonus[i];
    }
    for(i=0; i<n_lvl; i++)
    {
        for(j=0; j<n_lvl; j++)
        {
            if (strngth>drgn_strngth[j])
            {
                if (st[j]==0)
                {
                    strngth=strngth+bonus[j];
                    st[j]=1;
                    k++;
                    if (k==n_lvl)
                    {
                        f=1;
                        break;
                    }
                }
            }
        }
        if (f)
        {
            break;
        }
    }
    if (f)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
