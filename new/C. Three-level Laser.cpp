#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,u,i,j,tmp_i,tmp_j,f=0;
    scanf("%d %d",&n,&u);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>0;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(arr[i]-arr[j]==u)
            {
                tmp_i=i;
                tmp_j=j;
                f=1;
                break;
            }
            else
            {
                break;
            }
        }
    }
}
