#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=0,l=-1;
    cin>>n;
    for(i=1,j=1;; i+=j)
    {
        k++;
        if(k==n)
        {
            cout<<i<<endl;
            break;
        }
        j++;
        l++;
        j+=l;
    }
    return 0;
}
