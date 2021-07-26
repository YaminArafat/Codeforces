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
bool flag[15];
vi weights, ans, adj[15];
int m, dp[1005][15], f = 0, anss[1005];
// int DFS(int src, int cnt, int sumL, int sumR)
// {
//     // cout<<"incoming : ";
//     // see2(src,cnt);
//     if(cnt == m)
//     {
//         // see(cnt);
//         return 1;
//     }
//     if((cnt+1)%2)
//     {
//         if(sumL + src <= sumR)
//         {
//             return 0;
//         }
//         else
//         {
//             // cout<<"passed odd : ";
//             // see2(sumL,sumR);
//             sumL+=src;
//         }
//     }
//     else
//     {
//         if(sumR + src <= sumL)
//         {
//             return 0;
//         }
//         else
//         {
//             // cout<<"passed even : ";
//             // see2(sumL,sumR);
//             sumR+=src;
//         }
//     }
//     // cout<<"passed : ";
//     // see3(src,cnt,prev);
//     cnt++;
//     // if(dp[cnt][src])
//     // {
//     //     return dp[cnt][src];
//     // }
//     // prev = src;
//     // flag[src]=true;
//     for0(j,adj[src].size(),1)
//     {
//         if(cnt<m)
//         {
//             dp[cnt][src]+=DFS(adj[src][j], cnt, sumL, sumR);
//         }
//         else
//         break;
//     }
//     // cout<<"returning : ";
//     // see2(src, cnt);
//     //dp[cnt][src]=1;
//     return dp[cnt][src];
// }
void DFS(int cnt, int prev, int sumL, int sumR)
{
    if (cnt == m)
    {
        f = 1;
        return;
    }
    if (f)
        return;
    for0(i, weights.size(), 1)
    {
        //if (!cnt)
        //ans.clear();
        if ((cnt + 1) % 2)
        {
            //see3(cnt+1, prev, weights[i]);
            if (weights[i] != prev && sumL + weights[i] > sumR)
            {
                anss[cnt + 1] = weights[i];
                DFS(cnt + 1, weights[i], sumL + weights[i], sumR);
                if (f)
                {
                    return;
                }
            }
            else
            {
            }
        }
        else
        {
            //see3(cnt+1, prev, weights[i]);
            if (weights[i] != prev && sumR + weights[i] > sumL)
            {
                anss[cnt + 1] = weights[i];
                DFS(cnt + 1, weights[i], sumL, sumR + weights[i]);
                if (f)
                {
                    return;
                }
            }
            else
            {
            }
        }
    }
}
int main()
{
    fio;
#ifndef ONLINE_JUDGE
    rw;
#endif
    string s;
    cin >> s;
    int ansCnt = 0, cnt = 0, sumL = 0, sumR = 0;
    cin >> m;
    for0(i, 10, 1)
    {
        if (s[i] == '1')
            weights.pb(i + 1);
    }
    DFS(0, 0, 0, 0);
    if (f)
    {
        cout << "YES" << endl;
        for1(i, m, 1)
        {
            cout << anss[i] << " ";
        }
        cout << endl;
    }
    else
        // for0(i,weights.size(),1)
        // {
        //     for0(j,weights.size(),1)
        //     {
        //         if(i == j)
        //             continue;
        //         adj[weights[i]].pb(weights[j]);
        //     }
        // }
        // //cout<<"sdf";
        // for0(i,weights.size(),1)
        // {
        //     sumL = sumR = cnt = ansCnt = 0, prev = 0;
        //     //cnt++;
        //     DFS(weights[i], cnt, sumL, sumR);
        //     for1(j,m,1)
        //     {
        //         for1(k,10,1)
        //         {
        //             if(k!= prev && dp[j][k])
        //             {
        //                 ansCnt++;
        //                 prev=k;
        //                 break;
        //             }
        //         }
        //     }
        //     //see2(weights[i], ansCnt);
        //     if(ansCnt == m)
        //     {
        //         prev=0;
        //         cout<<"YES"<<endl;
        //         for1(j, m, 1)
        //         {
        //             for1(k, 10, 1)
        //             {
        //                 if (k!= prev && dp[j][k])
        //                 {
        //                     cout<<k<<" ";
        //                     prev=k;
        //                     break;
        //                 }
        //             }
        //         }
        //         return 0;
        //     }
        //     clr(dp,false);
        // }
        cout << "NO" << endl;
    // int prev = 0, sumL = 0, sumR = 0, f = 0;
    // for0(k, weights.size(), 1)
    // {
    //     prev = 0, sumL = 0, sumR = 0;
    //     ans.clear();
    //     clr(flag, false);
    //     flag[weights[k]] = true;
    //     ans.pb(weights[k]);
    //     flag[prev] = false;
    //     prev = weights[k];
    //     sumL += weights[k];
    //     for (int i = 2; i <= m; i++)
    //     {
    //         f = 0;
    //         if (i % 2)
    //         {
    //             for0(j, weights.size(), 1)
    //             {
    //                 if (!flag[weights[j]] && sumL + weights[j] > sumR)
    //                 {
    //                     flag[weights[j]] = true;
    //                     ans.pb(weights[j]);
    //                     flag[prev] = false;
    //                     prev = weights[j];
    //                     sumL += weights[j];
    //                     f = 1;
    //                     break;
    //                 }
    //             }
    //             // if (!f)
    //             // {
    //             //     break;
    //             // }
    //         }
    //         else
    //         {
    //             for0(j, weights.size(), 1)
    //             {
    //                 if (!flag[weights[j]] && sumR + weights[j] > sumL)
    //                 {
    //                     flag[weights[j]] = true;
    //                     ans.pb(weights[j]);
    //                     flag[prev] = false;
    //                     prev = weights[j];
    //                     sumR += weights[j];
    //                     f = 1;
    //                     break;
    //                 }
    //             }
    //             // if (!f)
    //             // {
    //             //     break;
    //             // }
    //         }
    //     }
    //     if (ans.size() == m)
    //     {
    //         cout << "YES" << endl;
    //         for0(i, m, 1)
    //         {
    //             cout << ans[i] << " ";
    //         }
    //         return 0;
    //     }
    // }
    // cout << "NO" << endl;
    // // if (ans.size() == m)
    // // {
    // //     cout << "YES" << endl;
    // //     for0(i, m, 1)
    // //     {
    // //         cout << ans[i] << " ";
    // //     }
    // // }
    // // else
    // // {
    // //     // if (s[0] == '1')
    // //     // {
    // //     //     if (m == 1)
    // //     //     {
    // //     //         cout << "YES" << endl
    // //     //              << "1" << endl;
    // //     //     }
    // //     //     else if (m == 2)
    // //     //     {
    // //     //         if (cnt > 0)
    // //     //         {
    // //     //             cout << "YES" << endl
    // //     //                  << "1 ";
    // //     //             for1(i, 9, 1)
    // //     //             {
    // //     //                 if (s[i] == '1')
    // //     //                 {
    // //     //                     cout << i + 1 << endl;
    // //     //                     break;
    // //     //                 }
    // //     //             }
    // //     //         }
    // //     //         else
    // //     //         {
    // //     //             cout << "NO" << endl;
    // //     //         }
    // //     //     }
    // //     //     else
    // //     //         cout << "NO" << endl;
    // //     // }
    // //     // else
    // //     //     cout << "NO" << endl;
    // //     clr(flag, false);
    // //     sumL = sumR = prev = 0;
    // //     ans.clear();
    // //     for1(i, m, 1)
    // //     {
    // //         //f = 0;
    // //         if (i % 2)
    // //         {
    // //             for1(i, weights.size() - 1, 1)
    // //             {
    // //                 if (!flag[weights[i]] && sumL + weights[i] > sumR)
    // //                 {
    // //                     flag[weights[i]] = true;
    // //                     ans.pb(weights[i]);
    // //                     flag[prev] = false;
    // //                     prev = weights[i];
    // //                     sumL += weights[i];
    // //                     f = 1;
    // //                     break;
    // //                 }
    // //             }
    // //             // if (!f)
    // //             // {
    // //             // }
    // //         }
    // //         else
    // //         {
    // //             for1(i, weights.size() - 1, 1)
    // //             {
    // //                 if (!flag[weights[i]] && sumR + weights[i] > sumL)
    // //                 {
    // //                     flag[weights[i]] = true;
    // //                     ans.pb(weights[i]);
    // //                     flag[prev] = false;
    // //                     prev = weights[i];
    // //                     sumR += weights[i];
    // //                     break;
    // //                 }
    // //             }
    // //         }
    // //     }
    // //     if (ans.size() == m)
    // //     {
    // //         cout << "YES" << endl;
    // //         for0(i, m, 1)
    // //         {
    // //             cout << ans[i] << " ";
    // //         }
    // //     }
    // //     else
    // //         cout << "NO" << endl;
    // // }
    return 0;
}