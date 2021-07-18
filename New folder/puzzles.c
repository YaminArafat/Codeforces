#include <stdio.h>
int main()
{
    int n,m,i,j,temp,x=0,min=10000,val;
    int array[51];
    scanf("%d %d",&n,&m);
    //array input
    for (i=0; i<m; i++)
    {
        scanf("%d",&array[i]);
    }
    array[i]='\0';
    //sort
    for (i=0; i<m; i++)
    {
        for (j=i+1; j<m; j++)
        {
            if (array[i] > array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    //finding minimum difference
    for (i=0; i<=m-n; i++)
    {
        val=array[i+n-1]-array[i];
        if (val < min)
        {
            min=val;
        }
    }
    printf("%d\n",min);
    return 0;
}
//A
