#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<unsigned long long int>fib;
    unsigned long long int n,i,j,a=0,b=1,c=0,beg=1,end,mid;


    for (i=2; i<=1000; i++)
    {
        c=a+b;
        a=b;
        b=c;
        fib.push_back(b);
    }
    end=fib.size();
    mid=(beg+end)/2;
    sort(fib.begin(),fib.end());
    for (i=1; i<=n; i++)
    {
        while(beg<=end && fib[mid]!=i)
        {
            if (i<fib[mid])
            {
                end=mid-1;
            }
            else if (i>fib[mid])
            {
                beg=mid+1;
            }
            mid=(beg+end)/2;
        }
        if (fib[mid]==i)
        {
            cout<<"O";
        }
        else
        {
            cout<<"o";
        }
    }

    /*while(!fib.empty())
    {
        cout<<fib.back()<<endl;
        fib.pop_back();
    }*/
}
