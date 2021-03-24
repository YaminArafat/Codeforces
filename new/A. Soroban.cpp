#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string zero="O-|-OOOO";
    char ch;
    cin>>n;
    int temp=n,dig;
    while(temp)
    {
        zero="O-|-OOOO";
        dig=temp%10;
        if(dig>4)
        {
            ch=zero[0];
            zero[0]=zero[1];
            zero[1]=ch;
            dig-=5;
        }
        if(dig<=4)
        {
            ch=zero[3];
            zero[3]=zero[3+dig];
            zero[3+dig]=ch;
        }
        temp/=10;
        cout<<zero<<endl;
    }
    if(!n)
    cout<<zero<<endl;
    return 0;
}
