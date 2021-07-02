#include<stdio.h>
int main()
{
	long int n,m,a,total=0,length=0,width=0;
	scanf("%ld %ld %ld",&n,&m,&a);
if (n>=1 && n<=1000000000 && m>=1 && m<=1000000000 && a>=1 && a<=1000000000 && total<=1000000000000000000000000000)
    {
	if(n%a==0)
		length=n/a;
	else
		{length=n/a;
		length++;
		}

	if(m%a==0)
		width=m/a;
	else
		{width=m/a;
		width++;}

	total=length*width;

	printf("%d",total);
	}

	return 0;
}
