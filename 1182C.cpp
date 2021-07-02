#include<bits/stdc++.h>
using namespace std;
vector<string>adj[100005];
vector<string>ans;
bool flag[15][100005];
int main()
{
    int n,f=0;
    cin>>n;
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        int cnt=0;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]=='a'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='e')
                cnt++;
        }
        adj[cnt].push_back(s);
    }
    for(int i=10; i>=0; i--)
    {
        if(adj[i].empty())
            continue;
        cout<<i<<endl;
        for(int j=0; j<adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<=10; i++)
    {

    }
    for(int i=10; i>=0; i--)
    {
        if(adj[i].size()<=1)
            continue;
        for(int k=0; k<adj[i].size()-1; k+=2)
        {
            if(!flag[i][k]&& !flag[i][k+1] && i>0)
            {
                for(int j=i-1; j>=0; j--)
                {
                    if(adj[j].size()<=1)
                        continue;
                    for(int l=0; l<adj[j].size()-1; l+=2)
                    {
                        if(!flag[j][l]&& !flag[j][l+1])
                        {
                            ans.push_back(adj[i][k]+" "+adj[j][l]);
                            ans.push_back(adj[i][k+1]+" "+adj[j][l+1]);
                            flag[i][k]=1;
                            flag[i][k+1]=1;
                            flag[j][l]=1;
                            flag[j][l+1]=1;
                            f=1;
                            break;
                        }
                    }
                    if(f)
                    {
                        f=0;
                        break;
                    }
                }
            }
            else if(k<adj[i].size()-2 && !flag[i][k]&& !flag[i][k+1] && !flag[i][k+2]&& !flag[i][k+3])
            {
                ans.push_back(adj[i][k]+" "+adj[i][k+1]);
                ans.push_back(adj[i][k+2]+" "+adj[i][k+3]);
                flag[i][k]=1;
                flag[i][k+1]=1;
                flag[i][k+2]=1;
                flag[i][k+3]=1;
                k+=2;
            }

        }
    }
    cout<<ans.size()/2<<endl;
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
}
/*if(adj[j].size()-l<=2)
            {
                j--;
                l=0;
                continue;
            }
            flag[j]=1;
            for(; l<adj[j].size()-1;)
            {
                int t=2;
                while(t--)
                {
                    ans.push_back(adj[i][k]+" "+adj[j][l]);
                    k++;
                    l++;
                }
                break;
            }*/
