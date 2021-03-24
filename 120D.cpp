#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n,m,sum=0,a,b,c,ans=0,ansc=0,ansr=0,smc=0,smr=0,cnt=0;
    cin>>n>>m;
    int arr[n+2][m+2];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>arr[i][j];
    cin>>a>>b>>c;
    vector<int>col,row,col2,row2;
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            sum+=arr[i][j];
        }
        col.push_back(sum);
        //col2.push_back(sum);
        sum=0;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            sum+=arr[i][j];
        }
        row.push_back(sum);
        //row2.push_back(sum);
        sum=0;
    }
    /*for(int i=0; i<n; i++)
        cout<<row[i]<<" ";
    cout<<endl;*/
    /*for(int i=0; i<n-1; i++)
    {
        if(row[i]==row[i+1])
        {
            cnt++;
        }
    }
    if(cnt==n-1)
        smr++;
    cnt=0;
    /*for(int i=0; i<m; i++)
        cout<<col[i]<<" ";
    cout<<endl;*/
    /*for(int i=0; i<m-1; i++)
    {
        if(col[i]==col[i+1])
        {
            cnt++;
        }
    }
    if(cnt==m-1)
        smc++;
    cout<<smc<<" "<<smr<<endl;*/
    for(int i=1; i<m; i++)
    {
        col[i]+=col[i-1];
        //cout<<col[i]<<endl;
    }
    /*for(int i=m-2; i>=0; i--)
    {
        col2[i]+=col2[i+1];
        //cout<<col2[i]<<endl;
    }*/
    for(int i=1; i<n; i++)
    {
        row[i]+=row[i-1];
        //cout<<row[i]<<endl;
    }
    /*for(int i=n-2; i>=1; i--)
    {
        row2[i]+=row2[i+1];
        //cout<<row[i]<<endl;
    }*/
    //return 0;
    for(int i=0; i<m; i++)
    {
        if(col[i]==a)
        {
            for(int j=i+1; j<m; j++)
            {
                if(col[j]-col[i]==b)
                {
                    for(int k=j+1; k<m; k++)
                    {
                        if(col[k]-col[j]==c)
                        {
                            ansc++;
                            break;
                        }
                    }
                }
                else if(col[j]-col[i]==c)
                {
                    for(int k=j+1; k<m; k++)
                    {
                        if(col[k]-col[j]==b)
                        {
                            ansc++;
                            break;
                        }
                    }
                }
            }
        }
        else if(col[i]==b)
        {
            for(int j=i+1; j<m; j++)
            {
                if(col[j]-col[i]==a)
                {
                    for(int k=j+1; k<m; k++)
                    {
                        if(col[k]-col[j]==c)
                        {
                            ansc++;
                            break;
                        }
                    }
                }
                else if(col[j]-col[i]==c)
                {
                    for(int k=j+1; k<m; k++)
                    {
                        if(col[k]-col[j]==a)
                        {
                            ansc++;
                            break;
                        }
                    }
                }
            }
        }
        else if(col[i]==c)
        {
            for(int j=i+1; j<m; j++)
            {
                if(col[j]-col[i]==b)
                {
                    for(int k=j+1; k<m; k++)
                    {
                        if(col[k]-col[j]==a)
                        {
                            ansc++;
                            break;
                        }
                    }
                }
                else if(col[j]-col[i]==a)
                {
                    for(int k=j+1; k<m; k++)
                    {
                        if(col[k]-col[j]==b)
                        {
                            ansc++;
                            break;
                        }
                    }
                }
            }
        }
    }
    //if(ansc && m>3)
        //ansc+=smc;
    /*for(int i=0; i<m; i++)
    {
        if(col2[i]==a)
        {
            int tmp=col2[i];
            for(int j=i+1; j<m; j++)
            {
                if(col2[j]-tmp==b)
                {
                    tmp=col2[j];
                    for(int k=j+1; k<m; k++)
                    {
                        if(col2[k]-tmp==c)
                            ans++;
                    }
                }
                else if(col2[j]-tmp==c)
                {
                    tmp=col2[j];
                    for(int k=j+1; k<m; k++)
                    {
                        if(col2[k]-tmp==b)
                            ans++;
                    }
                }
            }
        }
        else if(col2[i]==b)
        {
            int tmp=col2[i];
            for(int j=i+1; j<m; j++)
            {
                if(col2[j]-tmp==a)
                {
                    tmp=col2[j];
                    for(int k=j+1; k<m; k++)
                    {
                        if(col2[k]-tmp==c)
                            ans++;
                    }
                }
                else if(col2[j]-tmp==c)
                {
                    tmp=col2[j];
                    for(int k=j+1; k<m; k++)
                    {
                        if(col2[k]-tmp==a)
                            ans++;
                    }
                }
            }
        }
        else if(col2[i]==c)
        {
            int tmp=col2[i];
            for(int j=i+1; j<m; j++)
            {
                if(col2[j]-tmp==b)
                {
                    tmp=col2[j];
                    for(int k=j+1; k<m; k++)
                    {
                        if(col2[k]-tmp==a)
                            ans++;
                    }
                }
                else if(col2[j]-tmp==a)
                {
                    tmp=col2[j];
                    for(int k=j+1; k<m; k++)
                    {
                        if(col2[k]-tmp==b)
                            ans++;
                    }
                }
            }
        }
    }*/
    for(int i=0; i<n; i++)
    {
        if(row[i]==a)
        {
            for(int j=i+1; j<n; j++)
            {
                if(row[j]-row[i]==b)
                {
                    for(int k=j+1; k<n; k++)
                    {
                        if(row[k]-row[j]==c)
                        {
                            ansr++;
                            break;
                        }
                    }
                }
                else if(row[j]-row[i]==c)
                {
                    for(int k=j+1; k<n; k++)
                    {
                        if(row[k]-row[j]==b)
                        {
                            ansr++;
                            break;
                        }
                    }
                }
            }
        }
        else if(row[i]==b)
        {
            for(int j=i+1; j<n; j++)
            {
                if(row[j]-row[i]==a)
                {
                    for(int k=j+1; k<n; k++)
                    {
                        if(row[k]-row[j]==c)
                        {
                            ansr++;
                            break;
                        }
                    }
                }
                else if(row[j]-row[i]==c)
                {
                    for(int k=j+1; k<n; k++)
                    {
                        if(row[k]-row[j]==a)
                        {
                            ansr++;
                            break;
                        }
                    }
                }
            }
        }
        else if(row[i]==c)
        {
            for(int j=i+1; j<n; j++)
            {
                if(row[j]-row[i]==b)
                {
                    for(int k=j+1; k<n; k++)
                    {
                        if(row[k]-row[j]==a)
                        {
                            ansr++;
                            break;
                        }
                    }
                }
                else if(row[j]-row[i]==a)
                {
                    for(int k=j+1; k<n; k++)
                    {
                        if(row[k]-row[j]==b)
                        {
                            ansr++;
                            break;
                        }
                    }
                }
            }
        }
    }
    /*for(int i=0; i<n; i++)
    {
        if(row2[i]==a)
        {
            int tmp=row2[i];
            for(int j=i+1; j<n; j++)
            {
                if(row2[j]-tmp==b)
                {
                    tmp=row2[j];
                    for(int k=j+1; k<n; k++)
                    {
                        if(row2[k]-tmp==c)
                            ans++;
                    }
                }
                else if(row2[j]-tmp==c)
                {
                    tmp=row2[j];
                    for(int k=j+1; k<n; k++)
                    {
                        if(row2[k]-tmp==b)
                            ans++;
                    }
                }
            }
        }
        else if(row2[i]==b)
        {
            int tmp=row2[i];
            for(int j=i+1; j<n; j++)
            {
                if(row2[j]-tmp==a)
                {
                    tmp=row2[j];
                    for(int k=j+1; k<n; k++)
                    {
                        if(row2[k]-tmp==c)
                            ans++;
                    }
                }
                else if(row2[j]-tmp==c)
                {
                    tmp=row2[j];
                    for(int k=j+1; k<n; k++)
                    {
                        if(row2[k]-tmp==a)
                            ans++;
                    }
                }
            }
        }
        else if(row2[i]==c)
        {
            int tmp=row2[i];
            for(int j=i+1; j<n; j++)
            {
                if(row2[j]-tmp==b)
                {
                    tmp=row2[j];
                    for(int k=j+1; k<n; k++)
                    {
                        if(row2[k]-tmp==a)
                            ans++;
                    }
                }
                else if(row2[j]-tmp==a)
                {
                    tmp=row2[j];
                    for(int k=j+1; k<n; k++)
                    {
                        if(row2[k]-tmp==b)
                            ans++;
                    }
                }
            }
        }
    }*/
    //cout<<ansc<<" "<<ansr<<endl;
    //if(ansr && n>3)
       // ansr+=smr;
    cout<<ansc+ansr<<endl;
    return 0;
}
