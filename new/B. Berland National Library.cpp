#include <bits/stdc++.h>
using namespace std;
bool status[100];
bool sta[100];
int main()
{
    pair <char,int>info;
    vector<pair <char,int> >log;
    int n,i,j,count_1=0,count_2=0,x;
    char c;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c>>x;
        info.first=c;
        info.second=x;
        log.push_back(info);
    }
    for (i=0; i<n; i++)
    {
        if(log[i].first=='+' && log[i+1].first=='-' && log[i].second==log[i+1].second)
        {
            count_1++;
            i++;
        }
        else if (log[i].first=='-' || log[i].first=='+')
        {
            count_1++;
            if(log[i+1].first=='+')
            {
                count_2++;
                if(count_1<count_2)
                {
                    count_1=count_2;
                }
                else
                {
                    count_1--;
                }
            }
        }
        else if(log[i].first=='+' && log[i+1].first=='-' && log[i].second!=log[i+1].second)
        {
            count_1--;
        }
    }
    cout<<count_1<<endl;
    return 0;
}
/*if(log[i].first=='+' && log[i+1].first=='-')
        {
            for(j=0; j<i+1; j++)
            {
                if(log[i+1].second==log[j].second && log[j].first!=log[i+1].first)
                {
                    //count--;
                    status[i]=1;
                    status[i+1]=1;
                    break;
                }
            }
        }
        else if (status[i]==0)
        {
            if (log[i].first=='-' || log[i].first=='+')
            {
                //sta[log[i].second]=1;
                count++;
            }
        }*/
