#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define for0(i, n, incr) for (int i = 0; i < (int)(n); i += incr)
#define for1(i, n, incr) for (int i = 1; i <= (int)(n); i += incr)
#define forc(i, l, r, incr) for (int i = (int)(l); i <= (int)(r); i += incr)
#define forcr(i, r, l, decr) for (int i = (int)(r); i >= (int)(l); i -= decr)
#define forr0(i, n, decr) for (int i = (int)(n)-1; i >= 0; i -= decr)
#define forr1(i, n, decr) for (int i = (int)(n); i >= 1; i -= decr)
#define see(x) cout << "\n" << #x << " = " << (x) << "\n";
#define see2(x, y) cout << "\n"<< #x << " = " << (x) << " " << #y << " = " << (y) << '\n'
#define see3(x, y, z) cout << "\n" << #x << " = " << (x) << " " << #y << " = " << (y) << " " << #z << " = " << (z) << '\n'
#define clr(a, b) memset(a, b, sizeof(a))
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define tr(it, x) for (auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for (auto it = x.rbegin(); it != x.rend(); it +)
#define fio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define rw freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
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
    int n,r=0,b=0,g=0;
    string s;
    cin >> n >> s;
    for0(i, n, 1)
    {
        if (s[i] == 'R')
            r++;
        else if (s[i] == 'G')
            g++;
        else
            b++;
    }
    if (r && g && b)
        cout << "BGR" << endl;
    else if (r && g)
    {
        if (n >= 3)
        {
            if (r>1 && g==1)
            {
                cout << "BG" << endl;
            }
            else if (r==1 &&  g>1)
                cout << "BR" << endl;
            else
            cout << "BGR" << endl;
        }
        else if (n == 2)
        {
            cout << "B" << endl;
        }
    }
    else if (r && b)
    {
        if (n >= 3)
        {
            if (r>1 && b==1)
            {
                cout << "BG" << endl;
            }
            else if(r==1 && b>1)
                cout << "GR" << endl;
            else
            cout << "BGR" << endl;
        }
        else if (n == 2)
        {
            cout << "G" << endl;
        }
    }
    else if (b && g)
    {
        if (n >= 3)
        {
            if (b>1 && g==1)
            {
                cout << "GR" << endl;
            }
            else if (b==1 && g>1)
                cout << "BR" << endl;
            else
            cout << "BGR" << endl;
        }
        else if (n == 2)
        {
            cout << "R" << endl;
        }
    }
    else if(r)
    {
        cout<<"R"<<endl;
    }
    else if(g)
    {
        cout<<"G"<<endl;
    }
    else if(b)
    {
        cout<<"B"<<endl;
    }
    return 0;
}