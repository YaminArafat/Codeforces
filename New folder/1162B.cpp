#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+5][m+5],b[n+5][m+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(a[i][j]>a[i][j-1] && b[i][j]<=b[i][j-1] && b[i][j]>a[i][j-1] && a[i][j]>b[i][j-1])
            {
                swap(a[i][j],b[i][j]);
            }
            else if(a[i][j]>a[i][j-1] && b[i][j]<=b[i][j-1])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
            if(a[i][j]<=a[i][j-1] && b[i][j]>b[i][j-1] && a[i][j]>b[i][j-1] && b[i][j]>a[i][j-1])
            {
                swap(a[i][j],b[i][j]);
            }
            else if(a[i][j]<=a[i][j-1] && b[i][j]>b[i][j-1])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
            if(a[i][j]<=a[i][j-1] && b[i][j]<=b[i][j-1])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
    }
    for(int j=0;j<m;j++)
    {
        for(int i=1;i<n;i++)
        {
            if(a[i][j]>a[i-1][j] && b[i][j]<=b[i-1][j] && b[i][j]>a[i-1][j] && a[i][j]>b[i-1][j])
            {
               swap(a[i][j],b[i][j]);
            }
            else if(a[i][j]>a[i-1][j] && b[i][j]<=b[i-1][j])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
            if(a[i][j]<=a[i-1][j] && b[i][j]>b[i-1][j] && a[i][j]>b[i-1][j] && b[i][j]>a[i-1][j])
            {
               swap(a[i][j],b[i][j]);
            }
            else if(a[i][j]<=a[i-1][j] && b[i][j]>b[i-1][j])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
            if(a[i][j]<=a[i-1][j] && b[i][j]<=b[i-1][j])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
    }
    cout<<"Possible"<<endl;
    return 0;
}






























/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,f=1;
    cin>>n>>m;
    int a[n+5][m+5],b[n+5][m+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(a[i][j]>a[i][j-1] && b[i][j]<=b[i][j-1] && b[i][j]>a[i][j-1] && a[i][j]>b[i][j-1])
            {
                swap(a[i][j],b[i][j]);
                f=1;
            }
            else if(a[i][j]>a[i][j-1] && b[i][j]<=b[i][j-1])
            {
                f=0;
            }
            if(a[i][j]<=a[i][j-1] && b[i][j]>b[i][j-1] && a[i][j]>b[i][j-1] && b[i][j]>a[i][j-1])
            {
                swap(a[i][j],b[i][j]);
                f=1;
            }
            else if(a[i][j]<=a[i][j-1] && b[i][j]>b[i][j-1])
            {
                f=0;
            }
            if(a[i][j]<=a[i][j-1] && b[i][j]<=b[i][j-1])
            {
                f=0;
            }
            if(!f)
                break;
        }
    }
    for(int j=0;j<m;j++)
    {
        for(int i=1;i<n;i++)
        {
            if(a[i][j]>a[i-1][j] && b[i][j]<=b[i-1][j] && b[i][j]>a[i-1][j] && a[i][j]>b[i-1][j])
            {
               swap(a[i][j],b[i][j]);
               f=1;
            }
            else if(a[i][j]>a[i-1][j] && b[i][j]<=b[i-1][j])
            {
                f=0;
            }
            if(a[i][j]<=a[i-1][j] && b[i][j]>b[i-1][j] && a[i][j]>b[i-1][j] && b[i][j]>a[i-1][j])
            {
               swap(a[i][j],b[i][j]);
               f=1;
            }
            else if(a[i][j]<=a[i-1][j] && b[i][j]>b[i-1][j])
            {
                f=0;
            }
            if(a[i][j]<=a[i-1][j] && b[i][j]<=b[i-1][j])
            {
                f=0;
            }
        }
    }
    if(f)
    cout<<"Possible"<<endl;
    else
        cout<<"Impossible"<<endl;
    return 0;
}
*/






/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,f=0;
    cin>>n>>m;
    int a[n+5][m+5],b[n+5][m+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(a[i][j]>a[i][j-1] && b[i][j]<=b[i][j-1] && b[i][j]>a[i][j-1] && a[i][j]>b[i][j-1] && (!i||(b[i][j]>a[i-1][j] && a[i][j]>b[i-1][j])))
            {
                swap(a[i][j],b[i][j]);
                f=0;
            }
            else if(a[i][j]>a[i][j-1] && b[i][j]<=b[i][j-1])
            {
                f=1;
            }
            if(a[i][j]<=a[i][j-1] && b[i][j]>b[i][j-1] && a[i][j]>b[i][j-1] && b[i][j]>a[i][j-1] && (!i||(b[i][j]>a[i-1][j] && a[i][j]>b[i-1][j])))
            {
                swap(a[i][j],b[i][j]);
                f=0;
            }
            else if(a[i][j]<=a[i][j-1] && b[i][j]>b[i][j-1])
            {
                f=1;
            }
            if(a[i][j]<=a[i][j-1] && b[i][j]<=b[i][j-1])
            {
                f=1;
            }
        }
    }
    for(int j=0;j<m;j++)
    {
        for(int i=1;i<n;i++)
        {
            if(a[i][j]>a[i-1][j] && b[i][j]<=b[i-1][j] && b[i][j]>a[i-1][j] && a[i][j]>b[i-1][j] && (!j||(b[i][j]>a[i][j-1] && a[i][j]>b[i][j-1])))
            {
               swap(a[i][j],b[i][j]);
               f=0;
            }
            else if(a[i][j]>a[i-1][j] && b[i][j]<=b[i-1][j])
            {
                f=1;
            }
            if(a[i][j]<=a[i-1][j] && b[i][j]>b[i-1][j] && a[i][j]>b[i-1][j] && b[i][j]>a[i-1][j] && (!j||(b[i][j]>a[i][j-1] && a[i][j]>b[i][j-1])))
            {
               swap(a[i][j],b[i][j]);
               f=0;
            }
            else if(a[i][j]<=a[i-1][j] && b[i][j]>b[i-1][j])
            {
                f=1;
            }
            if(a[i][j]<=a[i-1][j] && b[i][j]<=b[i-1][j])
            {
                f=1;
            }

        }
    }
    if(!f)
    cout<<"Possible"<<endl;
    else
        cout<<"Impossible"<<endl;
    return 0;
}*/
/*
for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

*/
