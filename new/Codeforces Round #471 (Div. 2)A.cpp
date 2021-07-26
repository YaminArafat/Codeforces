#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hh,mm,h,d,c,n,dif_h;
    float ans;
    scanf("%d %d",&hh,&mm);
    scanf("%d %d %d %d",&h,&d,&c,&n);
    if (hh>=20 && hh<=23 && mm<=59)
    {
        int temp=h;
        int buy=(temp/n);
        if(temp%n)buy++;
        ans=(float)(c*buy)-(c*buy*0.2);
    }
    else
    {
        int temp=h;
        float buy=(temp/n);
        if(temp%n)buy++;
        ans=c*buy;
        if(mm)
        {
            mm=60-mm;
            dif_h=20-hh-1;
        }
        else
        {
            dif_h=20-hh;
        }
        int tym=dif_h*60+mm;
        //cout<<ans<<endl;
        temp=h+(tym*d);
        buy=(temp/n);
        if(temp%n)buy++;
        float ans2=(c*buy)-(c*buy*0.2);
        ans=min(ans,ans2);
        //cout<<ans2<<endl;
    }
    printf("%.4f\n",ans);
    return 0;
}

/*if(hh==23 && mm==59)
    {
        int temp=h;
        int buy=(temp/n);
        if(temp%n)buy++;
        ans=c*buy;
    }
    else */
