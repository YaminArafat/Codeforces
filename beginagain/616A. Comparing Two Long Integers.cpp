#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int as,bs;
    cin>>a>>b;
    int i=0;
    for(;i<a.size();i++)
    {
        if(a[i]=='0')
            continue;
        else
            break;
    }
    a=a.substr(i);
    i=0;
    for(;i<b.size();i++)
    {
        if(b[i]=='0')
            continue;
        else
            break;
    }
    b=b.substr(i);
    as=a.size();
    bs=b.size();
    //cout<<a<<" "<<b<<endl;
    if(as>bs)
    {
        printf(">\n");
        return 0;
    }
    else if(as<bs)
    {
        printf("<\n");
        return 0;
    }
    if(a>b)
    {
        printf(">\n");
    }
    else if(a<b)
    {
        printf("<\n");
    }
    else
        printf("=\n");
}
