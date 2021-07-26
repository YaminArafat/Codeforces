#include <bits/stdc++.h>
using namespace std;
vector<int>vec;
void factorial(int x)
{
    if(x==9)
    {
        vec.push_back(3);
        vec.push_back(3);
    }
    else if(x==8)
    {
        vec.push_back(2);
        vec.push_back(2);
        vec.push_back(2);
        vec.push_back(2);
    }
    else if (x==6)
    {
        vec.push_back(2);
        vec.push_back(3);
    }
    else if (x==4)
    {
        vec.push_back(2);
        vec.push_back(2);
    }
    else if(x!=1 )
    {
        vec.push_back(x);
    }
}
int main()
{
    int n,temp,x;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        x=str[i];
        factorial(x-48);
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
}
