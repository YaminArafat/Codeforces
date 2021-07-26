#include <bits/stdc++.h>
using namespace std;
bool on_off[1001];
int main()
{
    string str;
    int k,i,j,count=0;
    cin>>str;
    cin>>k;
    if(k>str.length())
    {
        cout<<"impossible"<<endl;
    }
    else
    {
        for(i=0; i<str.length()-1; i++)
        {
            if(!on_off[i])
            {
                for(j=i+1; j<str.length(); j++)
                {
                    if(str[i]==str[j])
                    {
                        count++;
                        on_off[j]=1;
                    }
                }
            }
        }
        if(count<(str.length()-k))
        {
            cout<<"0"<<endl;
        }
        else
            cout<<count-(str.length()-k)<<endl;
    }
    return 0;
}
