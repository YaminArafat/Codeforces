#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    char str[n+1];
    for (i=0 ; i<n; i++)
    {
        cin>>str[i];
    }
    str[i]='\0';
    for(i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
        {
            x++;
        }
    }
    cout<<x<<endl;
    return 0;
}
