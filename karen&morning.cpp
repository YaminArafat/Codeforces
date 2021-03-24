#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <strings.h>
using namespace std;
int main()
{
    int H,M;
    scanf("%d:%d",&H,&M);
    if (H==0 && M>0)
    {
        cout<<60-M+10<<endl;
    }
    else if (H==0 && M==0)
    {
        cout<<"0"<<endl;
    }
    else if (H==1 && M<10)
    {
        cout<<10-M<<endl;
    }
    else if (H==2 && M<20)
    {
        cout<<20-M<<endl;
    }
    else if (H==3 && M<30)
    {
        cout<<30-M<<endl;
    }
    else if (H==4 && M<40)
    {
        cout<<40-M<<endl;
    }
    else if (H==5 && M<50)
    {
        cout<<50-M<<endl;
    }
    else if (H==10 && M<1)
    {
        cout<<1-M<<endl;
    }
    else if (H==11 && M<11)
    {
        cout<<11-M<<endl;
    }
    else if (H==12 && M<21)
    {
        cout<<21-M<<endl;
    }
    else if (H==13 && M<31)
    {
        cout<<31-M<<endl;
    }
    else if (H==14 && M<41)
    {
        cout<<41-M<<endl;
    }
    else if (H==15 && M<51)
    {
        cout<<51-M<<endl;
    }
    else if (H==6 && M>00)
    {
        cout<<60-M+60+1+60+60<<endl;
    }
    else if (H==7 && M>00)
    {
        cout<<60-M+60+1+60<<endl;
    }
    else if (H==8 && M>00)
    {
        cout<<60-M+60+1<<endl;
    }
    else if (H==9 && M>00)
    {
        cout<<60-M+1<<endl;
    }
    else if (H==20 && M<2)
    {
        cout<<2-M<<endl;
    }
    else if (H==21 && M<12)
    {
        cout<<12-M<<endl;
    }
    else if (H==22 && M<22)
    {
        cout<<22-M<<endl;
    }
    else if (H==23 && M<32)
    {
        cout<<32-M<<endl;
    }
    else if (H==1 && M>10)
    {
        cout<<60-M+20<<endl;
    }
    else if (H==2 && M>20)
    {
        cout<<60-M+30<<endl;
    }
    else if (H==3 && M>30)
    {
        cout<<60-M+40<<endl;
    }
    else if (H==4 && M>40)
    {
        cout<<60-M+50<<endl;
    }
    else if (H==5 && M>50)
    {
        cout<<60-M+240+1<<endl;
    }
    else if (H==10 && M>1)
    {
        cout<<60-M+11<<endl;
    }
    else if (H==11 && M>11)
    {
        cout<<60-M+21<<endl;
    }
    else if (H==12 && M>21)
    {
        cout<<60-M+31<<endl;
    }
    else if (H==13 && M>31)
    {
        cout<<60-M+41<<endl;
    }
    else if (H==14 && M>41)
    {
        cout<<60-M+51<<endl;
    }
    else if (H==15 && M>51)
    {
        cout<<60-M+240+2<<endl;
    }
    else if (H==16 && M>00)
    {
        cout<<60-M+60+2+60+60<<endl;
    }
    else if (H==17 && M>00)
    {
        cout<<60-M+60+2+60<<endl;
    }
    else if (H==18 && M>00)
    {
        cout<<60-M+60+2<<endl;
    }
    else if (H==19 && M>00)
    {
        cout<<60-M+2<<endl;
    }
    else if (H==20 && M>2)
    {
        cout<<60-M+12<<endl;
    }
    else if (H==21 && M>12)
    {
        cout<<60-M+22<<endl;
    }
    else if (H==22 && M>22)
    {
        cout<<60-M+32<<endl;
    }
    else if (H==23 && M>32)
    {
        cout<<60-M<<endl;
    }
    else if (H==1 && M==10)
    {
        cout<<"0"<<endl;
    }
    else if (H==2 && M==20)
    {
        cout<<"0"<<endl;
    }
    else if (H==3 && M==30)
    {
        cout<<"0"<<endl;
    }
    else if (H==4 && M==40)
    {
        cout<<"0"<<endl;
    }
    else if (H==5 && M==50)
    {
        cout<<"0"<<endl;
    }
    else if (H==10 && M==1)
    {
        cout<<"0"<<endl;
    }
    else if (H==11 && M==11)
    {
        cout<<"0"<<endl;
    }
    else if (H==12 && M==21)
    {
        cout<<"0"<<endl;
    }
    else if (H==13 && M==31)
    {
        cout<<"0"<<endl;
    }
    else if (H==14 && M==41)
    {
        cout<<"0"<<endl;
    }
    else if (H==15 && M==51)
    {
        cout<<"0"<<endl;
    }
    else if (H==20 && M==2)
    {
        cout<<"0"<<endl;
    }
    else if (H==21 && M==12)
    {
        cout<<"0"<<endl;
    }
    else if (H==22 && M==22)
    {
        cout<<"0"<<endl;
    }
    else if (H==23 && M==32)
    {
        cout<<"0"<<endl;
    }
    else if (H==19 && M==00)
    {
        cout<<60+2<<endl;
    }
    else if (H==18 && M==00)
    {
        cout<<60+60+2<<endl;
    }
    else if (H==17 && M==00)
    {
        cout<<60+60+60+2<<endl;
    }
    else if (H==16 && M==00)
    {
        cout<<60+60+60+60+2<<endl;
    }
    else if (H==9 && M==00)
    {
        cout<<60+1<<endl;
    }
    else if (H==8 && M==00)
    {
        cout<<60+60+1<<endl;
    }
    else if (H==7 && M==00)
    {
        cout<<60+60+60+1<<endl;
    }
    else if (H==6 && M==00)
    {
        cout<<60+60+60+60+1<<endl;
    }
    return 0;
}
