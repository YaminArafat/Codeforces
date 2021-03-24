#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,fact=1,f=0;
    vector<char>vec;
    cin>>n;
    if(n<=3)
    {
        if (n==1)
        {
            cout<<"a";
        }
        else if(n==2)
        {
            cout<<"ab";
        }
        else
        {
            cout<<"aab";
        }
        return 0;
    }
    if(n%2==0)
    {
        f=1;
        n--;
    }
    if(n>=3)
    {
        for(int i=n; i>=1;)
        {
            if(i>=3)
            {
                cout<<"aab";
                vec.push_back('a');
                vec.push_back('a');
                vec.push_back('b');
                i-=3;
            }
            if(i>0)
            {
                if(vec[vec.size()-2]=='a')
                {
                    cout<<"b";
                    vec.push_back('b');
                }
                else
                {
                    cout<<"a";
                    vec.push_back('a');
                }
                i--;
            }
        }
    }
    if(f)
    {
        if(vec[vec.size()-2]=='a')
        {
            cout<<"b";
        }
        else
        {
            cout<<"a";
        }
    }
    return 0;
}
