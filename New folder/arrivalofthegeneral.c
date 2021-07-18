#include <stdio.h>
int main()
{
    int n,i,j,temp,max=0,x=0,min=1000,indmax,indmin;
    scanf("%d",&n);
    int array[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    array[i]='\0';
    //finding max & min
    for (i=0; i<n; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        if (array[i]<min)
        {
            min=array[i];
        }
    }
    //printf("max=%d min=%d\n",max,min);
    //finding index of max
    for (i=0; i<n; i++)
    {
        if (array[i]==max)
        {
            indmax=i;
            //printf("indmax=%d\n",indmax);
            break;
        }
    }
    //finding index of min
    for (i=n-1; i>=0; i--)
    {
        if (array[i]==min)
        {
            indmin=i;
            //printf("indmin=%d\n",indmin);
            break;
        }
    }
    if (indmax>indmin)
    {
        //moving max to index 0
        for (i=0; i<=indmax; i++)
        {
            if (array[i]<max)
            {
                temp=max;
                array[i]=max;
                max=temp;
                x++;
                //printf("%d max=%d\n",array[i],x);
            }
        }
        //moving min to index n-1
        for (i=n-1; i>indmin; i--)
        {
            if (array[i]>min)
            {
                temp=min;
                array[i]=min;
                min=temp;
                x++;
                //printf("%d min=%d\n",array[i],x);
            }
        }
        printf("%d\n",x-1);
    }
    else
    {
        //moving max to index 0
        for (i=0; i<=indmax; i++)
        {
            if (array[i]<max)
            {
                temp=max;
                array[i]=max;
                max=temp;
                x++;
                //printf("%d max=%d\n",array[i],x);
            }
        }
        //moving min to index n-1
        for (i=n-1; i>=indmin; i--)
        {
            if (array[i]>min)
            {
                temp=min;
                array[i]=min;
                min=temp;
                x++;
                //printf("%d min=%d\n",array[i],x);
            }
        }
        printf("%d\n",x);
    }
    return 0;
}
