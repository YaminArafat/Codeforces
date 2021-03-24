#include <iostream>
#include <cstdlib>
#include <string.h>
#include <cstdio>
using namespace std;
int main()
{
    int n,i,x=0,w=0,y=0,z=0;
    cin>>n;
    int array[n];
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        if(array[i]==4)
        {
            w++;
        }
        else if(array[i]==3)
        {
            x++;
        }
        else if(array[i]==2)
        {
            y++;
        }
        else if(array[i]==1)
        {
            z++;
        }
    }
    if(z>x)
    {
        x=x;
        z=z-x;
    }
    else if (z<=x)
    {
        x=x;
        z=0;
    }
    if((z/2)>y)
    {
        y=y;
        z=z-(2*y);
    }
    else if((z/2)<=y)
    {
        if(z%2)
        {
            y=((y-(z/2))%2) ? (((y-(z/2))+1)/2) : (((y-(z/2))/2)+1);
            y=y+(z/2);
        }
        else
        {
            y=(y-(z/2))%2?((y-(z/2))/2)+1:(y-(z/2))/2;
            y=y+(z/2);
        }
        z=0;
    }
    if(z)
    {
        if(z>=4)
        {
            if(z%4==0)
            {
                z=z/4;
            }
            else
            {
                z=(z/4)+1;
            }
        }
        else
        {
            z=1;
        }
    }
    //cout<<w<<endl<<x<<endl<<y<<endl<<z<<endl;
    cout<<w+x+y+z<<endl;
    return 0;
}
