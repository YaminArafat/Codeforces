#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define for0(i, n, incr) for (int i = 0; i < (int)(n); i+=incr) 
#define for1(i, n, incr) for (int i = 1; i <= (int)(n); i+=incr) 
#define forc(i, l, r, incr) for (int i = (int)(l); i <= (int)(r); i+=incr) 
#define forcr(i, r, l, decr) for (int i = (int)(r); i >= (int)(l); i-=decr)
#define forr0(i, n, decr) for (int i = (int)(n) - 1; i >= 0; i-=decr)
#define forr1(i, n, decr) for (int i = (int)(n); i >= 1; i-=decr) 
#define see(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define see2(x,y) cout<<"\n"<<#x<<" = "<<(x)<<" "<<#y<<" = "<<(y)<<'\n'
#define see3(x,y,z) cout<<"\n"<<#x<<" = "<<(x)<<" "<<#y<<" = "<<(y)<<" "<<#z<<" = "<<(z)<<'\n'
#define clr(a,b) memset(a,b,sizeof(a))
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
#define fio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define rw freopen("input.txt","r",stdin);freopen("output.txt","w",stdout); 
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int main()
{
    fio;
    // #ifndef ONLINE_JUDGE
    //     rw;
    // #endif
    int t;
    string s, odd, even;
    cin >> t;
    while (t--)
    {
        cin >> s;
        odd = "";
        even = "";
        // int arr[50][50];
        // clr(arr,0);
        // for1(i,26,1)
        // {
        //     for1(j,26,1)
        //     {
        //         if(i==j || abs(i-j)>1)
        //             continue;
        //         arr[i][j]=1;
        //     }
        // }
        // for1(i,26,1)
        // {
        //     for1(j,26,1)
        //     {
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        sort(all(s), greater<char>());
        //see(s);
        for0(i, s.size(), 1)
        {
            if ((s[i] - 96) % 2)
            {
                odd += s[i];
            }
            else
                even += s[i];
            //     if(s[i+1]-s[i]!=1)
            //         continue;
            //     forc(j,i+2,s.size()-1,1)
            //     {
            //         if(s[j]-s[i]!=1)
            //         {
            //             swap(s[j],s[i]);
            //             break;
            //         }
            //     }
            //     if (abs(s[i] - s[i + 1]) == 1 || (i > 0 && abs(s[i] - s[i - 1]) == 1))
            //     {
            //         see2(i,s);
            //         for0(j, s.size(), 1)
            //         {
            //             if (i == j || abs(s[j] - s[i]) == 1)
            //                 continue;
            //             if (abs(s[j] - s[i]) != 1)
            //             {
            //                 if (abs(s[i] - s[j - 1]) != 1 && abs(s[i] - s[j + 1]) != 1 && abs(s[i + 1] - s[j]) != 1 && abs(s[i - 1] - s[j]) != 1)
            //                 {
            //                     swap(s[j], s[i]);
            //                     break;
            //                 }
            //             }
            //         }
            //     }
            //     see(s);
            // }
            // see(s);
            // for0(i,s.size()-1,1)
            // {
            //     if(abs(s[i]-s[i+1])==1)
            //     {
            //         s="No answer";
            //         break;
            //     }
        }
        if (abs(odd[odd.size() - 1] - even[0]) == 1 )
        {
            sort(all(odd));
            if (abs(odd[odd.size() - 1] - even[0]) == 1)
            {
                sort(all(even));
                if (abs(odd[odd.size() - 1] - even[0]) == 1)
                {
                    cout << "No answer" << endl;
                    continue;
                }
            }
        }
        cout << odd + even << endl;
    }
    return 0;
}