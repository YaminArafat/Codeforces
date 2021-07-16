#include <bits/stdc++.h>
//#include <tr1/unordered_map>
//#include<unordered_map>
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
    #ifndef ONLINE_JUDGE
        rw;
    #endif
        int n, k1, k2, x;
        cin >> n;
        cin >> k1;
        queue<int> q1;
        for0(i, k1, 1)
        {
            cin >> x;
            q1.push(x);
        }
        cin >> k2;
        queue<int> q2, tmpQ1, tmpQ2;
        map<vi, int> mp;
        // vector<queue<int> >vec1, vec2;
        set<pair<queue<int>, queue<int> > > s;
        for0(i, k2, 1)
        {
            cin >> x;
            q2.push(x);
        }
        x = 0;
        while (1)
        {
            vi tmpV1, tmpV2;
            int frontQ1 = q1.front();
            int frontQ2 = q2.front();
            tmpQ1 = q1;
            tmpQ2 = q2;
            if (!s.count(mk(q1, q2)))
            {
                s.insert(mk(q1, q2));
            }
            else
            {
                cout << "-1" << endl;
                return 0;
            }
            // for0(i,vec1.size(),1)
            // {
            //     if(vec1[i] == q1)
            //     {
            //         for0(j,vec2.size(),1)
            //         {
            //             if(vec2[j] == q2)
            //             {
            //                 cout<<"-1"<<endl;
            //                 return 0;
            //             }
            //         }
            //     }
            //     else if(vec1[i]==q2)
            //     {
            //         for0(j,vec2.size(),1)
            //         {
            //             if(vec2[j] == q1)
            //             {
            //                 cout<<"-1"<<endl;
            //                 return 0;
            //             }
            //         }
            //     }
            // }
            // for0(i,vec2.size(),1)
            // {
            //     if(vec2[i] == q1)
            //     {
            //         for0(j,vec1.size(),1)
            //         {
            //             if(vec1[j] == q2)
            //             {
            //                 cout<<"-1"<<endl;
            //                 return 0;
            //             }
            //         }
            //     }
            //     else if(vec2[i]==q2)
            //     {
            //         for0(j,vec1.size(),1)
            //         {
            //             if(vec1[j] == q1)
            //             {
            //                 cout<<"-1"<<endl;
            //                 return 0;
            //             }
            //         }
            //     }
            // }
            //vec1.pb(q1);
            //vec2.pb(q2);
            // while (!tmpQ1.empty())
            // {
            //     //cout << tmpQ1.front() << " ";
            //     tmpV1.pb(tmpQ1.front());
            //     tmpQ1.pop();
            // }
            // //cout << endl;
            // while (!tmpQ2.empty())
            // {
            //     //cout << tmpQ2.front() << " ";
            //     tmpV2.pb(tmpQ2.front());
            //     tmpQ2.pop();
            // }
            // if (!mp[tmpV1] && !mp[tmpV2])
            // {
            //     mp[tmpV1]++;
            //     mp[tmpV2]++;
            // }
            // else
            // {
            //     // while (!q1.empty())
            //     // {
            //     //     cout << q1.front() << " ";
            //     //     q1.pop();
            //     // }
            //     // cout << endl;
            //     // while (!q2.empty())
            //     // {
            //     //     cout << q2.front() << " ";
            //     //     q2.pop();
            //     // }
            //     // cout <<x<<" "<< endl;
            //     cout << "-1" << endl;
            //     return 0;
            // }
            q1.pop();
            q2.pop();
            if (frontQ1 > frontQ2)
            {
                q1.push(frontQ2);
                q1.push(frontQ1);
            }
            else
            {
                q2.push(frontQ1);
                q2.push(frontQ2);
            }
            // while (!tmpQ1.empty())
            // {
            //     cout<<tmpQ1.front()<<" ";
            //     tmpQ1.pop();
            // }
            // cout<<endl;
            // while (!tmpQ2.empty())
            // {
            //     cout<<tmpQ2.front()<<" ";
            //     tmpQ2.pop();
            // }
            // cout<<endl;
            // while (!q1.empty())
            // {
            //     cout<<q1.front()<<" ";
            //     q1.pop();
            // }
            // cout<<endl;
            // while (!q2.empty())
            // {
            //     cout<<q2.front()<<" ";
            //     q2.pop();
            // }
            // cout<<endl;
            x++;
            // if (tmpQ1 == q2 && tmpQ2 == q1)
            // {
            //     cout << "-1" << endl;
            //     return 0;
            // }
            if (q1.empty())
            {
                cout << x << " " << 2 << endl;
                return 0;
            }
            else if (q2.empty())
            {
                cout << x << " " << 1 << endl;
                return 0;
            }
        }
        return 0;
}
