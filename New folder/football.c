#include <stdio.h>
#include <string.h>

int main()

{
    int str[100];
    int str1[100];
    int y=0,x=0,i,z;

    scanf("%i", str);
    z=strlen(str);

    for (i=0; i<=z; i++)
    {
        str[i]++;
    }
       // if (str[i]=='0')
        //{
       ////     x=x+1;
       // }
        //else if (str[i]=='1')
        //{
          //  y=y+1;
        //}
    //}
   // if ((x>=7)||(y>=7))
   // {
   //     printf("YES");
   // }
   // if ((x<=7)||(y<=7))
    //{
    //    printf("NO");
   // }
   for (i=0;i<z;i++)
   {
    printf("%i %i",i+1,str[i]);
   }
system("PAUSE");
    return 0;
}
