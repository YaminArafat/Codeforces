#include<iostream>
#include<math.h>
#include<cstdlib>
#include<algorithm>
using namespace std;
int power( int a , int b,int m)
{
    if(b==0)return 1;
    if(b%2==0){ unsigned long long  p = power(a,b/2,m);return(p%m*p%m)%m;}
    else { return (a%m)*power(a,b-1,m);}
}

int main()
{
   /** int n ;
    cin>>n;
    bool b = true;
    unsigned long long  temp,gcd=1;
    while(n--)
    {
        cin>>temp;
        double Phi = (sqrtl(5.0)+1)/2.0;
        ///cout<<Phi<<endl;
        double phi = Phi - 1 ;
        ///cout<<phi<<endl;
        unsigned long long fib = (powl(Phi,temp)-powl(-phi,temp))/sqrtl(5.0);
        /// cout<<fib<<endl;
        if(b)
        {
            b=0;
            gcd=fib;
        }
        gcd = __gcd(gcd,fib);
    }
    cout<<gcd<<endl;
    **/
    int a,b,c;
    cin>>a>>b>>c;
    a=a%c;
cout<<power(a,b,c)<<endl;

    cout<<endl;

}
