#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int strngth[n+10];
    int school[n+10];
    //int qun[m+10]={0};
    int choosen[k+10];
    for(int i=0; i<n; i++)
    {
        cin>>strngth[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>school[i];
        //qun[school[i]]++;
    }
    for(int i=0; i<k; i++)
    {
        cin>>choosen[i];
    }
    int cnt=0,curr,tmp;
    for(int i=0; i<k; i++)
    {
        curr=strngth[choosen[i]-1];
        //int f=0,indx=0;
        for(int j=0; j<n; j++)
        {
            if(school[j]==school[choosen[i]-1])
            {
                if(strngth[j]>curr)
                {
                    //indx=j;
                    //f=1;
                    cnt++;
                    break;
                }
            }
        }
        /*if(f &&!indx)
            cnt+=(qun[school[indx]]-1);*/
    }
    cout<<cnt<<endl;
    return 0;
}
