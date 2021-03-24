#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s,i=0,temp,temp2,count=0;
    cin>>m>>s;
    int arr[901];
    if((m>=1 && s==0)||m*9<s)
    {
        if(m==1 && s==0)
        {
            cout<<"0 0"<<endl;
        }
        else
        {
            cout<<"-1 -1"<<endl;
        }
    }
    else
    {
        if(s<=m*9)
        {
            temp=m;
            temp2=s;
            while(temp--)
            {
                if(temp2>=9)
                {
                    temp2-=9;
                    arr[i++]=9;
                }
                else
                {
                    if(temp2==0)
                    {
                        count++;
                    }
                    arr[i++]=temp2;
                    temp2=0;
                }
            }
            if(count>0)
            {
                cout<<"1";
                count--;
                int f=1;
                for(int j=i-2; j>=0; j--)
                {
                    if(arr[j]!=0 && f)
                    {
                        cout<<arr[j]-1;
                        f=0;
                    }
                    else
                    {
                        cout<<arr[j];
                    }
                }
            }
            else
            {
                for(int j=i-1; j>=0; j--)
                {
                    cout<<arr[j];
                }
            }
            cout<<" ";
            for(int j=0; j<i; j++)
            {
                cout<<arr[j];
            }
        }
    }
    return 0;
}



/*
//}
        /*else
        {
            cout<<"1";

            cout<<s;
            for(int i=0; i<m-1; i++)
            {
                cout<<"0";
            }
        }
        //cout<<i<<endl;

        /*if(s>=9)
        {
            if(s<=m*9)
            {
                cout<<"1";
                temp=m-1;
                temp2=s-1;
                while(temp--)
                {
                    if(temp2>=9)
                    {
                        temp2-=9;
                        arr1[i++]=9;
                    }
                    else
                    {
                        arr1[i++]=temp2;
                        temp2=0;
                    }
                }
                for(int j=i-1; j>=0; j--)
                {
                    cout<<arr1[j];
                }
            }
        }*/
