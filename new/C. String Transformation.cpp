/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int value=97,h=0,f=0,s=0;
    string str;
    cin>>str;
    if(str.length()<26)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(int i=0; i<str.length()-1; i++)
        {
            if((int)str[i]==value)
            {
                if(str[i]=='z')
                {
                    h++;
                    break;
                }
                else
                {
                    h++;
                    //value=(int)str[i];
                    if((int)str[i+1]==value+1)
                    {
                        value=value+1;
                    }
                    else if(str[i+1]==str[i])
                    {
                        value=value+1;
                        str[i+1]=(char)value;
                    }
                    else
                    {
                        cout<<"-1"<<endl;
                        f=1;
                        break;
                    }
                }
                s=0;
            }
            else
            {
                s=1;
            }
        }
        if(!f && h==25 && !s)
        {
            cout<<str<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
*/

// && str[i]<122 && str.length()-i>=h//else if(str[i]==value  && str[i]!='z')
/*{
    value=value+1;
    str[i]=(char)value;
}*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int value=97,h=0,c=0;
    string str;
    cin>>str;
    if(str.length()<26)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(int i=0; i<str.length(); i++)
        {
            if(value<123)
            {
                if(str[i]==value)
                {
                    h++;
                    value++;
                }
                else if(str[i]<value)
                {
                    h++;
                    str[i]=(char)value;
                    value++;
                }
            }
            else
            {
                break;
            }
        }
        if(h>=26)
        {
            cout<<str<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
