#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int k,n=0,m=0;
    cin>>k;
    for(int i=5; i*i<=k; i++)
    {
        if(k%i==0 && (k/i)>=5)
        {
            n=i,m=k/i;
            break;
        }
    }
    if(!n||!m)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    char arr1[n+5][m+5];
    char arr[]= {'a','e','i','o','u'};
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i>0)
            {
                if(arr1[i-1][j]=='a')
                {
                    arr1[i][j]='e';
                }
                else if(arr1[i-1][j]=='e')
                {
                    arr1[i][j]='i';
                }
                else if(arr1[i-1][j]=='i')
                {
                    arr1[i][j]='o';
                }
                else if(arr1[i-1][j]=='o')
                {
                    arr1[i][j]='u';
                }
                else if(arr1[i-1][j]=='u')
                {
                    arr1[i][j]='a';
                }
            }
            else
                arr1[i][j]=arr[j%5];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<arr1[i][j];
    }
    return 0;
}

