#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    string str;
    cin>>n;
    cin>>str;
    for(i=0; i<n-1; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
        {
            if(str[i+1]=='a'||str[i+1]=='e'||str[i+1]=='i'||str[i+1]=='o'||str[i+1]=='u'||str[i+1]=='y')
            {
                for(j=i+1; j<n; j++)
                {
                    str[j]=str[j+1];
                }
                i=-1;
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}
