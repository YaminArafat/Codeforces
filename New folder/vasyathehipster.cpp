#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    int red,blue,hipster,same;
    cin>>red>>blue;
    if (red>blue)
    {
        hipster=blue;
        same =red-blue;
        if (same%2 == 0)
        {
            cout<<hipster<<" "<<same/2<<endl;
        }
        else if (same<2)
        {
            cout<<hipster<<" "<<"0"<<endl;
        }
        else if (same%2 != 0 && same>2)
        {
            cout<<hipster<<" "<<(same-1)/2<<endl;
        }
    }
    else if (red<blue)
    {
        hipster=red;
        same =blue-red;
        if (same%2 == 0)
        {
            cout<<hipster<<" "<<same/2<<endl;
        }
        else if (same<2)
        {
            cout<<hipster<<" "<<"0"<<endl;
        }
        else if (same%2 != 0 && same>2)
        {
            cout<<hipster<<" "<<(same-1)/2<<endl;
        }
    }
    else if (red == blue)
    {
        cout<<red<<" "<<"0"<<endl;
    }
    return 0;
}
