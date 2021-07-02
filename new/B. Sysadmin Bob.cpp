#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans[70],tmp;
    int a=0,f=1,x=0,count=0;
    cin>>s;
    if(s[0]=='@'||s[s.size()-1]=='@')
    {
        cout<<"No solution"<<endl;
        return 0;
    }
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='@')
        {
            count++;
        }
    }
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='@')
        {
            x=1;
            tmp=s.substr(0,i);
            //cout<<s<<"  "<<tmp<<endl;
            // cout<<tmp.size()<<endl;
            if(tmp.size()>=1)
            {
                count--;
                if(s[i+1]!='@')
                {
                    if(count)
                        tmp.append(s,i,2);
                    else
                        tmp.append(s.substr(i,s.size()-i));
                    //cout<<tmp<<endl;
                    ans[a++]=tmp;
                }
                else
                {
                    f=0;
                    //cout<<f<<endl;
                    break;
                }
            }
            else
            {
                f=0;
                //cout<<tmp<<endl;
                break;
            }
            s.erase(s.begin(),s.begin()+i+2);
            if(!s.size())
            {
                break;
            }
            i=-1;
        }
        //cout<<tmp<<endl;
    }
    //cout<<a<<endl;
    if(!f||!x)
    {
        cout<<"No solution"<<endl;
        return 0;
    }
    for(int i=0; i<a; i++)
    {
        cout<<ans[i];
        if(i<a-1)
        {
            cout<<",";
        }
        else
        {
            cout<<endl;
        }
    }
    return 0;
}
