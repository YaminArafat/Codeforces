#include <stdio.h>
int main()
{
    int sum=0,i,value;
    char str[101];
    scanf(" %[^\n]",str);
    value=26-(str[i]-96-1);
    for (i=1;i<strlen(str);i++)
    {
        if (str[i] < str[i+1])
        {
            if ((26-(str[i+1]-str[i])) < (str[i+1]-str[i]))
            {
                value=(26-(str[i+1]-str[i]));
            }
            else
            {
                value=(str[i+1]-str[i]);
            }
        }
        else if (str[i] > str[i+1])
        {
            if ((26-(str[i]-str[i+1])) < abs(str[i]-str[i+1]))
            {
                value=(26-(str[i]-str[i+1]));
            }
            else
            {
                value=(str[i]-str[i+1]);
            }
        }
        sum=sum+value;
        printf("%d\n",sum);
    }
    return 0;
}
