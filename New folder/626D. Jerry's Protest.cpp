#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool flag[5005];
int main()
{
    int n,ans=0;
    double sum=0.0,d;
    cin>>n;
    int points[n+5];
    vector<int>vec;
    for(int i=0; i<n; i++)
        cin>>points[i];
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(!flag[abs(points[i]-points[j])])
                vec.push_back(abs(points[i]-points[j])),flag[abs(points[i]-points[j])]=1;
        }
    }
    sort(vec.rbegin(),vec.rend());
    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<endl;
    for(int i=0; i<vec.size()-1; i++)
    {
        for(int j=i+1; j<vec.size(); j++)
        {
            if(vec[j]*2<vec[i])
                ans++;
        }
        if(ans==1)
            sum+=1.0;
        else if(ans==2)
            sum+=3.0;
        else
            sum+=ans*2.0;
        ans=0;
    }
    d=(n*n*n*(n-1)*(n-1)*(n-1))/8;
    cout<<sum<<" "<<d<<endl;
    cout<<setprecision(9)<<sum/d<<endl;
    return 0;
}
