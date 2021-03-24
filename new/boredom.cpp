#include <bits/stdc++.h>
using namespace std;
map <int , int> mp;
int main()
{
    int n ,i;
    cin>>n;
    int arr[n];
    i=0;
    while(n--)
    {
    int temp;
    cin>>temp;
    arr[i++]=temp;
    ++mp[temp];
    }


}
