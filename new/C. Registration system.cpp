#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    pair<string,int>p;
    vector<pair<string,int> >vec;
    string s;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        cin>>s;
        p.first=s;
        p.second=0;
        vec.push_back(p);
    }
    printf("OK\n");
    for(i=1;i<n;i++)
    {
        int f=0;
        for(j=0;j<i;j++)
        {
            if(!strcmp((vec[j].first).c_str(),(vec[i].first).c_str()))
            {
                vec[j].second++;
                vec[i].second=vec[j].second;
                cout<<vec[i].first<<vec[i].second<<endl;
                f=1;
                break;
            }
        }
        if(!f)
        {
            printf("OK\n");
        }
    }
    return 0;
}





/*#include <bits/stdc++.h>
using namespace std;
struct name
{
    char str[33];
    int tag;
};
int main()
{
    int num,i,j,f=0;
    cin>>num;
    struct name n[num];
    for(i=0; i<num; i++)
    {
        cin>>n[i].str;
        n[i].tag=0;
    }
    cout<<"OK"<<endl;
    for(i=1; i<num; i++)
    {
        for(j=0; j<i; j++)
        {
            if(strcmp(n[i].str,n[j].str)==0)
            {
                n[j].tag++;
                cout<<n[i].str<<n[j].tag<<endl;
                f=1;
                break;
            }
            else if(j==i-1&&f==0)
            {
                cout<<"OK"<<endl;
                break;
            }
        }
        f=0;
    }
    return 0;
}
*/
