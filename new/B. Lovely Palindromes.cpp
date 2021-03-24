#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,rev;
    cin>>str;
    rev=str;
    reverse(str.begin(),str.end());
    rev.append(str);
    str.clear();
    cout<<rev;
    rev.clear();
    return 0;
}
