#include <bits/stdc++.h>
#define ll long long
using namespace std;
int edge[20][20];
int mat[20][20];
int arr[20];
vector<int>vec[10];
bool flag[20][20];
class ggg
{
public:
    int left,right;
};
ggg g[10];
int main()
{
    int n,m,a[10],b[10],k=20;
    int on[]= {1,2,3,4,5};
    int off[]= {1,2,3,4,5,6};
    int xx[]= {11,12,13,14,15,16,22,23,24,25,26,33,34,35,36,44,45,46,55,56,66};
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        cin>>a[i]>>b[i];
        arr[a[i]]++;
        arr[b[i]]++;
        vec[a[i]].push_back(b[i]);
        vec[b[i]].push_back(a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        g[i].left=6;
        g[i].right=6;
        for(int j=0; j<vec[i].size(); j++)
        {
            for(int k=1;k<=n;k++)
            {

            }
            g[vec[i][j]].left=g[i].left;
            g[vec[i][j]].right=g[i].right;
        }
    }
}
/*
if(arr[i]==2)
        {
            for(int j=0; j<vec[i].size(); j++)
            {
                edge[i][vec[i][j]]=xx[k];
            }
        }
*/
