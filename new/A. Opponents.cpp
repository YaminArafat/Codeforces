#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,one=0,count=0,mx=0;
    string str;
    vector<string>vec;
    cin>>n>>d;
    for(int i=0;i<d;i++)
    {
        cin>>str;
        vec.push_back(str);
    }
    for(int i=0;i<d;i++)
    {
        string temp=vec[i];
        for(int j=0;j<n;j++)
        {
            if(temp[j]=='1')
            {
                one++;
            }
        }
        if(one==n)
        {
            count=0;
            one=0;
        }
        else
        {
            count++;
            one=0;
        }
        if(count>mx)
        {
            mx=count;
        }
    }
    cout<<mx<<endl;
    return 0;
}
