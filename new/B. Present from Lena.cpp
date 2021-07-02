#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,m=2;
    cin>>n;
    int arr[n+1];
    for(i=0; i<=n; i++)
    {
        arr[i]=i;
    }
    int space=n*2;
    int line=(n*2)+1;
    for(i=0; i<line; i++)
    {
        if(i>n)
        {
            if(space<0)
            {
                space=0;
            }
            space+=2;
        }
        for(j=0; j<space; j++)
        {
            cout<<" ";
        }
        if(i<=n)
        {
            space-=2;
            for(k=0; k<i; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<arr[i];
            if(i>0)
            {
                cout<<" ";
            }
            for(k=i-1; k>=0; k--)
            {
                cout<<arr[k];
                if(k>0)
                {
                    cout<<" ";
                }
            }
        }
        else
        {
            for(k=0; k<i-m; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<arr[i-m];
            if(i<line-1)
            {
                cout<<" ";
            }
            m++;
            for(k=i-m; k>=0; k--)
            {
                cout<<arr[k];
                if(k>0)
                {
                    cout<<" ";
                }
            }
            m++;
        }
        cout<<endl;
    }
    return 0;
}
