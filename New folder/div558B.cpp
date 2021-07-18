#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mat[100005][20];
int main()
{
    ll n,sum=0,mn=LONG_LONG_MAX,cnt=1,x=0,y=1,ans;
    cin>>n;
    ll arr[n+5];
    //vector<ll>vec[n+5],v;
    //set<ll>s;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
       // s.insert(arr[i]);
        //v.push_back(s.size());
        //mat[i+1][arr[i]]=mat[i][arr[i]]+1;
    }
    for(int i=1; i<=n; i++)
    {
        mat[i][arr[i-1]]=mat[i-1][arr[i-1]]+1;
        //s[i].insert(mat[i][arr[i-1]]);
        for(int j=1; j<=10; j++)
        {
            if(j!=arr[i-1]){
                mat[i][j]=mat[i-1][j];
               // s[i].insert(mat[i][j]);
            }
        }
        for(int j=1; j<=10; j++)
        {
            if(mat[i][j])
            {
                mat[i][j]--;
                set<ll>tmp;
                for(int k=1; k<=10; k++)
                {
                    if(mat[i][k])
                    {
                        //cout<<i<<" "<<mat[i][j]<<" "<<mat[i][k]<<endl;
                        tmp.insert(mat[i][k]);
                    }
                }
                mat[i][j]++;
                //cout<<i<<" "<<y<<" "<<x<<" "<<cnt<<" "<<v[i-1]<<endl;
                if(tmp.size()<=1)
                {
                    ans=i;
                }
            }
        }
    }
    cout<<ans<<endl;
    /*for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=10; j++)
        {

            if(mat[i-1][j]>mat[i][j])
            {
                mat[i][j]+=mat[i-1][j];

            }
            else if(!mat[i][j])
                mat[i][j]=mat[i-1][j];
        }
    }*/
    /*for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=10; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }*/
    //cout<<s.size()<<endl;
    /*for(int i=n; i>=1; i--)
    {
        //sort(mat[i],mat[i]+10);
        for(int j=1; j<=10; j++)
        {
            if(mat[i][j])
            {
                mat[i][j]--;
                set<ll>tmp;
                for(int k=1; k<=10; k++)
                {
                    if(mat[i][k])
                    {
                        //cout<<i<<" "<<mat[i][j]<<" "<<mat[i][k]<<endl;
                        tmp.insert(mat[i][k]);
                    }
                }
                mat[i][j]++;
                //cout<<i<<" "<<y<<" "<<x<<" "<<cnt<<" "<<v[i-1]<<endl;
                if(tmp.size()<=1)
                {
                    cout<<i<<endl;
                    return 0;
                }
            }
        }
    }*/
    /*for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=10; j++)
        {
            if(mat[i][j])
            {
                vec[i].push_back(mat[i][j]);
            }
        }
    }
    for(int i=n; i>=1; i--)
    {
        sort(vec[i].begin(),vec[i].end());
        for(int j=0; j<vec[i].size()-1; j++)
        {
            //sum+=abs(vec[i][j]-vec[i][j+1]);
            if(vec[i][j]==vec[i][j+1])
                cnt++;
        }
        if((cnt==vec[i].size()-1 && (vec[i][1]-vec[i][0]>0||vec[i][vec[i].size()-1]-vec[i][vec[i].size()-2]==1))||(cnt==vec[i].size() && vec[i][0]==1))
        {
            cout<<i<<endl;
            return 0;
        }
        cnt=1;
        /*if(sum==1 || vec[i].size()==1)
        {
            cout<<i<<endl;
            return 0;
        }
        else if(sum==0 &&  vec[i][0]==1)
        {
            cout<<i<<endl;
            return 0;
        }
        sum=0;
    }*/
    return 0;
}

