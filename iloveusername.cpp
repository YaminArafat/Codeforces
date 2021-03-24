#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int size,i,j,k=0,x=0,max,min;
    int array[10001];
    cin>>size;
    for (i=0; i<size; i++)
    {
        cin>>array[i];
    }
    array[i]='\0';
    max=0;
    min=10000;
    for (j=0; j<size; j++)
    {
        if (array[j]>max)
        {
            max=array[j];
        }
        else if (array[j]<min)
        {
            min=array[j];
        }
        if (array[k++]>max)
        {
            x++;
        }
        else if (array[k++]<min)
        {
            x++;
        }
        /*else if (array[j]<min)
        for (k=0;k<strlen(array);k++)
        {

        }*/
    }
    cout<<x<<" "<<max<<endl;
}

