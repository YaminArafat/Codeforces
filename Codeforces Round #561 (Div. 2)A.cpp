#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mat[3][200];
int main()
{
    int n,k=1,mx=0;
    cin>>n;
    string s;
    //set<char>s;
    //map<char,int>mp;
    bool flag[200]= {0};

    vector<char>vec;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        //mp[s[0]]++;
        //if(!flag[s[0]])
        vec.push_back(s[0]);
        //flag[s[0]]=1;
        //s.insert(s[0]);
    }
    for(int i=0; i<vec.size()-1; i++)
    {
        if(flag[i])
            continue;
        for(int j=i+1; j<vec.size(); j++)
        {
            if(!flag[j] && vec[i]!=vec[j] && !mat[1][(int)vec[i]] && !mat[1][(int)vec[j]])
            {
                mat[1][(int)vec[i]]++;
                mat[1][(int)vec[j]]++;
                flag[j]=1;
                break;
            }
            else if(!flag[j] && vec[i]!=vec[j] && !mat[2][(int)vec[i]] && !mat[2][(int)vec[j]])
            {
                mat[2][(int)vec[i]]++;
                mat[2][(int)vec[j]]++;
                flag[j]=1;
                break;
            }
            else
            {
                if(mat[1][(int)vec[i]]+mat[1][(int)vec[j]]<mat[2][(int)vec[i]]+mat[2][(int)vec[j]])
                {
                    mat[1][(int)vec[i]]++;
                    if(vec[i]!=vec[j])
                        mat[1][(int)vec[j]]++;
                    flag[j]=1;
                    break;
                }
                else
                {
                    mat[2][(int)vec[i]]++;
                    if(vec[i]!=vec[j])
                        mat[2][(int)vec[j]]++;
                    flag[j]=1;
                    break;
                }
            }
        }
        flag[i]=1;
    }
    for(int i=1; i<=2; i++)
    {
        for(int j=90; j<125; j++)
            mx=max(mx,mat[i][j]);

    }
    cout<<mx<<endl;
    /*
    if(vec[i]!=vec[j] && !mat[k][vec[j]-'0'] && !mat[k][vec[i]-'0'])
                mat[k][vec[j]-'0']=1,mat[k][vec[i]-'0']=1;
            else if(vec[i]!=vec[j] && !mat[k+1][vec[j]-'0'] && !mat[k+1][vec[i]-'0'])
                mat[k+1][vec[j]-'0']=1,mat[k+1][vec[i]-'0']=1;
            else

    */
    //set<char>::iterator it;
    /*for(it=s.begin();it!=s.end();++it)
    {

    }*/
    /*for(int i=0;i<vec.size()-1;i++)
    {
        while(mp[vec[i]])
        {
            for(int j=i+1;j<vec.size();j++)
            {
                if(mp[vec[j]])
                {
                    mp[vec[j]]--;

                }
            }
        }
    }*/
    return 0;
}
