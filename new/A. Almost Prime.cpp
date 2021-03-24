#include <bits/stdc++.h>
using namespace std;
bool flag[3001];
bool flag2[3001];
vector<int>vec;
void seive(int n)
{
    for(int i=3; i*i<=n; i+=2)
    {
        if(!flag[i])
        {
            for(int j=i*i; j<=n; j+=2*i)
            {
                flag[j]=1;
            }
        }
    }
    vec.push_back(2);
    for(int i=3; i<=n; i+=2)
    {
        if(!flag[i])
        {
            vec.push_back(i);
            //cout<<i<<" "<<flag[i]<<endl;
        }
    }
    int count=0,f=0,k=0;
    for(int j=6; j<=n; j++)
    {
        int temp=j;
        cout<<temp<<endl;
        for(int i=0; i<vec.size();)
        {
            while(temp%vec[i]==0)
            {
                temp/=vec[i];
                flag2[i]=1;
                i=-1;
                //cout<<temp<<" "<<vec[i]<<endl;
                count++;
                if(count>2)
                {
                    break;
                }
            }
        }
        if(count==2&&temp==1)
        {
            k++;
        }
        count=0;
        printf("%d\n",k);
    }
    //printf("%d\n",k);
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    seive(n);
//    for(int i=0)
}
