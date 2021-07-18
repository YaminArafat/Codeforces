#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,x,tmp,idx=0;
    cin>>n>>k;
    vector<long long>vec;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    tmp=(n*(n+1))/2;
    while(k<=(tmp-n))
    {
        tmp-=n;
        idx++;
        n--;
    }
    //cout<<tmp<<" "<<idx<<" "<<n<<endl;
    for (int i=vec.size()-idx-1;i>=0;i--)
    {
        if(tmp==k)
        {
            cout<<vec[i]<<endl;
            break;
        }
        tmp--;
    }
    return 0;
}
