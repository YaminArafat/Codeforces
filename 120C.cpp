#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n,k,sum=0,x;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x>=k && x>=3*k)
            sum+=(x-(3*k));
        else if(x>=k)
            sum+=x%k;
        else
            sum+=x;
    }
    cout<<sum<<endl;
    return 0;
}
/*/* if(n==1)
    {
        while(arr[0].first>=k && flag[arr[0].second]<3)
        {
            arr[0].first-=k;
            flag[arr[0].second]++;
        }
        cout<<arr[0].first<<endl;
        return 0;
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    //for(int i=0; i<n; i++)
    //cout<<arr[i].first<<" "<<arr[i].second<<endl;

    {
        for(int i=1; i<n;)
        {
            if(arr[0].first>arr[i].first && flag[arr[i].second]<3 && flag[arr[0].second]<3 && arr[0].first>=k)
            {
                //cout<<arr[0].first<<" "<<arr[i].first<<endl;
                while(arr[0].first>arr[i].first && flag[arr[i].second]<3 && flag[arr[0].second]<3 && arr[0].first>=k)
                {
                    arr[0].first-=k;
                    flag[arr[0].second]++;
                    if(flag[arr[0].second]==3 || arr[0].first<k)
                    {
                        sum+=arr[0].first;
                        arr.erase(arr.begin());
                        cnt++;
                        break;
                    }
                }
                if(arr.size()==1)
                {
                    while(arr[0].first>=k && flag[arr[0].second]<3)
                    {
                        arr[0].first-=k;
                        flag[arr[0].second]++;
                    }
                    cout<<sum+arr[0].first<<endl;
                    return 0;
                }
                // for(int i=0; i<arr.size(); i++)
                //cout<<arr[i].first<<" "<<arr[i].second<<endl;
                sort(arr.begin(),arr.end());
                reverse(arr.begin(),arr.end());
                //for(int i=0; i<arr.size(); i++)
                // cout<<arr[i].first<<" "<<arr[i].second<<endl;
            }
            else
            {
                for(int i=0; i<arr.size(); i++)
                {
                    if(arr[i]==ar[i+1])
                    {
                        arr.erase(arr.begin()+i);
                    }
                }
                i++;
            }
        }
        memset(flag,0,sizeof(flag));
        for(int i=0; i<arr.size(); i++)
        {
            flag[arr[i].first]++;
            if(flag[arr[i].first]>1)
                mark[arr[i].first]=1;
        }
        for(int i=0; i<arr.size(); i++)
        {
            if(!mark[arr[i].first])
            {
                sum+=arr[i].first;
            }
        }
        cout<<sum<<endl;
        /*int i=0;
        while(arr[i].first>arr[i+1].first && flag[arr[i].second]<3 && arr[i].first>=k)
        {
            arr[i].first-=k;
            flag[arr[i].second]++;
            if(flag[arr[i].second]==3 || arr[i].first<k)
            {
                sum+=arr[i].first;
                cnt++;
                break;
            }
        }
        if(cnt==n)
        {
            cout<<sum<<endl;
            break;
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());*/
//}*/
