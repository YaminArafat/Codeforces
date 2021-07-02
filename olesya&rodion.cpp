#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int n,t,j,k,count=0;
    long long int i;
    //int array[101];
    cin>>n>>t;
    for (i=1;i<=1000000000000000000000000;i++)
    {
        if (i%n==0)
        {
            //k=i%n;
            for (j=i;j!=0;j=j/10)
            {
                //k=i%10;
                //if (i)
                count++;
                //i=i/10;

            }
            if (count == n && i%t == 0 && i!=0)
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
