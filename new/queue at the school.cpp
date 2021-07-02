#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;
    char temp;
    cin>>n>>t;
    char str[n+1];
    cin>>str;
    while (t--)
    {
        for (i=0; i<n-1; i++)
        {
            if(str[i]=='B'&&str[i+1]=='G')
            {
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
                i++;
            }
        }
    }
    cout<<str<<endl;
    return 0;
}
