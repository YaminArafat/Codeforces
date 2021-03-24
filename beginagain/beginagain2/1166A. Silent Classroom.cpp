#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0;
    cin>>n;
    string s;
    int arr[200]= {0};
    for(int i=0; i<n; i++)
    {
        cin>>s;
        arr[s[0]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(arr[i]<3)
            continue;
        int x=ceil((double)arr[i]/2.0);
        int y=floor((double)arr[i]/2.0);
        if(x==1)
            x=0;
        if(y==1)
            y=0;
        if(a>b)
        {
            b+=(x*(x-1))/2;
            a+=(y*(y-1))/2;
        }
        else
        {
            a+=(x*(x-1))/2;
            b+=(y*(y-1))/2;
        }
    }
    cout<<a+b<<endl;
}
