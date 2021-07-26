#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i=0 ,j=0,n , m,temp;
    cin>>n>>m;
    long long int arr1[n] , arr2[m] , arr3[2505],MAX=-1000000000;
    for(i=0;i<n;i++){cin>>arr1[i];if(MAX<abs(arr1[i])){temp=i;MAX=abs(arr1[i]);}}
    //cout<<temp<<endl;
    for(i=0;i<m;i++){cin>>arr2[i];}
    //sort(arr1,arr1+n);
    //sort(arr2,arr2+m);
    int count =0;
    for(i=0;i<n;i++)
    {
        if(temp==i)continue;
        for(j=0;j<m;j++)
        {
            arr3[count++]=arr1[i]*arr2[j];
        }
    }
    sort(arr3,arr3+count);
    //for(i=0;i<count;i++)cout<<arr3[i]<<" ";
    //cout<<endl;
    cout<<arr3[count-1]<<endl;

}
