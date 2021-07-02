#include <bits/stdc++.h>
using namespace std;
bool flag[30];
int main()
{
    int c=0,f=0;
    string s;
    cin>>s;
    int arr[27]= {0};
    for(int i=0; i<s.size(); i++)
    {
        if(!flag[s[i]-96])
        {
            flag[s[i]-96]=1;
            arr[s[i]-96]++;
            c++;
        }
        else
        {
            arr[s[i]-96]++;
        }
    }
    //cout<<c<<endl;
    if(c==4)
    {
        cout<<"Yes"<<endl;
    }
    else if(c==3)
    {
        if(s.size()>3)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    else if (c==2)
    {
        int dif;
        for(int i=1; i<25; i++)
        {
            if(!arr[i])
            {
                continue;
            }
            for(int j=i+1; j<26; j++)
            {
                if(!arr[j])
                {
                    continue;
                }
                if(arr[j])
                {
                    dif=abs(arr[i]-arr[j]);
                    if(arr[j]<=arr[i])
                    {
                        f=1;
                    }
                    break;
                }
            }
        }
        //cout<<dif<<endl;
        if((dif%2||dif<=1)&&f)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
/***/
