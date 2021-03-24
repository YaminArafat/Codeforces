#include <bits/stdc++.h>
using namespace std;
bool st[5000];
int main()
{
    int n,i,j,cnt1=0,cnt2=0,cnt3=0,a,x=0,f=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(n>=3)
    {
        for(i=0; i<n; i++)
        {
            if(arr[i]==1)
            {
                cnt1++;
            }
            else if(arr[i]==2)
            {
                cnt2++;
            }
            else if(arr[i]==3)
            {
                cnt3++;
            }
        }
        a=min(cnt1,cnt2);
        a=min(a,cnt3);
        cout<<a<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    if(a!=0)
    {
        /*cnt1=a;
        cnt2=a;
        cnt3=a;
        for(i=0; i<n; i++)
        {
            if(arr[i]==1 && cnt1)
            {
                st[i]=1;
                cnt1--;
            }
            else if(arr[i]==2 && cnt2)
            {
                st[i]=1;
                cnt2--;
            }
            else if(arr[i]==3 && cnt3)
            {
                st[i]=1;
                cnt3--;
            }
        }*/
        for(i=0; i<n; i++)
        {
            if(st[i]==0&&arr[i]==1)
            {
                x++;
                for (j=0; j<n; j++)
                {
                    if(st[j]==0&&arr[j]==2)
                    {
                        cout<<i+1<<" "<<j+1<<" ";
                        st[i]=1;
                        st[j]=1;
                        f=1;
                        break;
                    }
                }
                if(f)
                {
                    for (j=0; j<n; j++)
                    {
                        if(st[j]==0&&arr[j]==3)
                        {
                            cout<<j+1<<endl;
                            st[j]=1;
                            f=0;
                            break;
                        }
                    }
                }
            }
            if(x==a)
            {
                break;
            }
        }
    }
    return 0;
}
