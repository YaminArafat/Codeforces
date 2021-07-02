#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    char str[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>str[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<4; j++)
        {
            if(str[i][j]==str[i][j+1] && str[i][j]=='O')
            {
                str[i][j]='+';
                str[i][j+1]='+';
                i=n;
                break;
            }
        }
    }
    if(i>n)
    {
        cout<<"YES"<<endl;
        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
            {
                cout<<str[i][j];
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
