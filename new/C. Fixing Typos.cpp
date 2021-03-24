#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    cout<<str.length()<<endl;
    return 0;
    if(str.length()>=2)
    {
        for(int i=0; i<str.length()-2; i++)
        {
            if(str[i]==str[i+1])
            {
                if(str[i+1]!=str[i+2])
                {
                    if(str[i+2]==str[i+3])
                    {
                        str.erase(str.begin()+i+3,str.begin()+i+4);
                        i--;
                    }
                }
                else
                {
                    str.erase(str.begin()+i+2,str.begin()+i+3);
                    i--;
                }
            }
        }
    }
    cout<<str<<endl;
    return 0;
}
