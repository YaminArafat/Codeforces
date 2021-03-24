#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

    string s;
    int a;
    cin>>s;
    cin>>a;
    if(s[0]=='f')
    {
        if(a==1)
        {
            cout<<"L"<<endl;
        }
        else
        {
            cout<<"R"<<endl;
        }
    }
    else
    {
        if(a==1)
        {
            cout<<"R"<<endl;
        }
        else
        {
            cout<<"L"<<endl;
        }
    }
    return 0;
}
