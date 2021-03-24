#include<bits/stdc++.h>
#include <string>
using namespace std;
queue<pair<string,int> >strnum;
vector<int>num;
bool mark[500000];
vector<string>str;
int z,mx=-1,pq;
//vector<vector<string> >ans;
string ans[500000]={""};
string input,tmp,ss;
void recur(int child,int i)
{
    if(num[i]==0)
    {
        z++;
        mx=max(mx,child);
        //cout<<"if "<<child<<" "<<str[i]<<" "<<num[i]<<" "<<z<<" "<<endl;
        //z++;
        //ans[child].push_back(str[i]);
        ans[child]+=str[i]+" ";
        strnum.pop();
        return;
    }
    else
    {
        //ans[child].push_back(str[i]);
        ans[child]+=str[i]+" ";
        mx=max(mx,child);
        z++;
       // cout<<"else "<<child<<" "<<str[i]<<" "<<num[i]<<" "<<z<<endl;
        for(int j=1; num[i]>0; j++)
        {
            if(!mark[i+j])
            {
                num[i]--;
                recur(child+1,i+j);
                mark[i+j]=true;
               // cout<<"returning "<<child<<" "<<str[i]<<" "<<num[i]<<" "<<z<<endl;
                //nest++;
            }
            else
                j=z-1;
        }

        strnum.pop();
        return;
    }
}
int main()
{
    cin>>input;
    tmp=input;
    int cnt=0;//p=0;//prev=0;
    for(int i=0; i<tmp.size(); i++)
    {
        if(tmp[i]==',')
        {
            //cout<<i<<" "<<endl;//<<p<<" "<<input.substr(j+1,p+i-j-1)<<endl;
            cnt++;
            if(cnt==1)
            {
                //string ss=input.substr(j+1,i-j-1);
                ss=tmp.substr(0,i);
                tmp.erase(0,i+1);
                str.push_back(ss);
                i=-1;
            }
            else if (cnt==2)
            {
                //int pq=std::atoi(tmp.substr(i+1,j-i-1).c_str());
                pq=std::atoi(tmp.substr(0,i).c_str());
                tmp.erase(0,i+1);
                num.push_back(pq);
                cnt=0;
                i=-1;
                //cout<<ss<<" "<<pq<<endl;
                strnum.push(make_pair(ss,pq));
            }
            /*j=i+1;
            for(; j<tmp.size(); j++)
            {
                if(tmp[j]==',')
                {
                    break;
                }
            }*/
            //prev=j;
            //tmp.replace(j,1,".");
            //p=j-i;
            //tmp.erase(0,j+1);
        }
        //cout<<tmp.size()<<endl;
    }
    num.push_back(0);
    strnum.push(make_pair(ss,0));
    //cout<<tmp<<endl;
    /*for(int i=0; i<tmp.size(); i++)
    {
        if(tmp[i]==' ')
        {
            //cout<<i<<" "<<tmp.substr(0,i)<<endl;
            str.push_back(tmp.substr(0,i));
            tmp.erase(0,i+1);
            i=0;
        }
    }*/
    /*for(int i=0; i<str.size(); i++)
    {
        //int h=num[i];
        //strnum.push(make_pair(str[i],num[i]));
        cout<<str[i]<<" "<<num[i]<<endl;
    }*/

    while(!strnum.empty())
    {
        //pair<string,int>p=strnum.front();
        recur(0,z);
        //cout<<strnum.front().first<<" "<<strnum.front().second<<endl;
        //strnum.pop();
    }
    cout<<mx+1<<endl;
    for(int i=0; ans[i]!=""; i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}
