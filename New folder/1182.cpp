#include<bits/stdc++.h>
using namespace std;
bool flag[505][505],f;
int n,m;
char arr[505][505];
bool fun(int i,int j)
{
    memset(flag,0,sizeof(flag));
    flag[i][j]=1;
    bool u=0,d=0,r=0,l=0;;
    for(int upc=i-1; upc>=0; upc--)
    {
        if(arr[upc][j]=='*')
        {
            u=1;
            flag[upc][j]=1;
        }
        else
            break;
    }
    for(int dwc=i+1; dwc<n; dwc++)
    {
        if(arr[dwc][j]=='*')
        {
            d=1;
            flag[dwc][j]=1;
        }
        else
            break;
    }
    for(int rghtr=j+1; rghtr<m; rghtr++)
    {
        if(arr[i][rghtr]=='*')
        {
            r=1;
            flag[i][rghtr]=1;
        }
        else
            break;
    }
    for(int lftr=j-1; lftr>=0; lftr--)
    {
        if(arr[i][lftr]=='*')
        {
            l=1;
            flag[i][lftr]=1;
        }
        else
            break;
    }
    if(u&&d&&r&&l)
    {
        return true;
    }
    return false;
}
int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]=='.')
                continue;
            if(fun(i,j))
            {
                f=1;
                break;
            }
        }
        if(f)
            break;
    }
    if(f)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]=='.')
                    continue;
                if(!flag[i][j])
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
/*
bool fun(int i,int j)
{
    if(arr[i-1][j]=='*'&&arr[i+1][j]=='*'&&arr[i][j-1]=='*'&&arr[i][j+1]=='*')
    {
        for(int r=0; r<n; r++)
        {
            for(int c=0; c<m; c++)
            {
                if(i==r && j==c)
                    continue;
                if(arr[r][c]=='*')
                    return false;
            }
        }
        return true;
    }
    return false;
}


memset(flag,0,sizeof(flag));
    flag[i][j]=1;
    bool u=0,d=0,r=0,l=0;;
    for(int upc=i-1; upc>=0; upc--)
    {
        if(arr[upc][j]=='*')
        {
            u=1;
            flag[upc][j]=1;
        }
    }
    for(int dwc=i+1; dwc<n; dwc++)
    {
        if(arr[dwc][j]=='*')
        {
            d=1;
            flag[dwc][j]=1;
        }
    }
    for(int rghtr=j+1; rghtr<m; rghtr++)
    {
        if(arr[i][rghtr]=='*')
        {
            r=1;
            flag[i][rghtr]=1;
        }
    }
    for(int lftr=j-1; lftr>=0; lftr--)
    {
        if(arr[i][lftr]=='*')
        {
            l=1;
            flag[i][lftr]=1;
        }
    }*/
