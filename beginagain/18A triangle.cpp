#include <bits/stdc++.h>
using namespace std;
int drx[]= {1,-1,0,0};
int dry[]= {0,0,1,-1};
int f(int x1,int y1,int x2,int y2,int x3,int y3)
{

    int a=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
    int b=((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3));
    int c=((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2));
    if((a+b)==c || (b+c)==a || (a+c)==b)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(f(x1,y1,x2,y2,x3,y3))
    {
        cout<<"RIGHT"<<endl;
    }
    else
    {
        int tmpx,tmpy;
        for(int i=0; i<4; i++)
        {
            tmpx=x1+drx[i];
            tmpy=y1+dry[i];
            if(tmpx==x2 && tmpy==y2)
            {
                continue;
            }
            if(tmpx==x3 && tmpy==y3)
            {
                continue;
            }
            if(f(tmpx,tmpy,x2,y2,x3,y3))
            {
                //cout<<drx[i]<<" "<<dry[i]<<endl;
                cout<<"ALMOST"<<endl;
                return 0;
            }
        }
        for(int i=0; i<4; i++)
        {
            tmpx=x2+drx[i];
            tmpy=y2+dry[i];
            if(tmpx==x1 && tmpy==y1)
            {
                continue;
            }
            if(tmpx==x3 && tmpy==y3)
            {
                continue;
            }
            if(f(x1,y1,tmpx,tmpy,x3,y3))
            {
                cout<<"ALMOST"<<endl;
                return 0;
            }
        }
        for(int i=0; i<4; i++)
        {
            tmpx=x3+drx[i];
            tmpy=y3+dry[i];
            if(tmpx==x2 && tmpy==y2)
            {
                continue;
            }
            if(tmpx==x1 && tmpy==y1)
            {
                continue;
            }
            if(f(x1,y1,x2,y2,tmpx,tmpy))
            {
                cout<<"ALMOST"<<endl;
                return 0;
            }
        }
        cout<<"NEITHER"<<endl;
    }
}
