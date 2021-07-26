#include <bits/stdc++.h>
using namespace std;
bool st[101];
int main()
{
    int n,i,x,count=0;
    cin>>n;
    char str[n+1];
    for(i=0; i<n; i++)
    {
        cin>>str[i];
    }
    str[i]='\0';
    if(n<26)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(i=0; i<strlen(str); i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                x=(int)str[i];
                if(st[x]==0)
                {
                    st[x]=1;
                    st[x-32]=1;
                    count++;
                }
            }
            else if(str[i]>='A'&&str[i]<='Z')
            {
                x=(int)str[i];
                if(st[x]==0)
                {
                    st[x]=1;
                    st[x+32]=1;
                    count++;
                }
            }
        }
        if(count==26)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
