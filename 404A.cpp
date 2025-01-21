#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vvi vector<vector<int>>
#define mii map<int, int>
#define msi map<string, int>
#define mci map<char, int>
#define mpi map<pair<int, int>, int>
#define si set<int>
#define smi multiset<int>
#define spi set<pair<int, int>>
#define smpi multiset<pair<int, int>>
#define up upper_bound
#define low lower_bound
#define mod 1000000007
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define int long long
#define pb push_back
#define pop pop_back()
#define ff first
#define ss second
#define be begin()
#define en end()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
//***************************************************
// Author:         Md Mozammil Ali
// Institution:    IIIT Lucknow
//****************************************************


int32_t main(){
    fast 
    int n; cin >> n;
    msi m{{"Tetrahedron",4}, {"Cube",6},{"Octahedron",8}, {"Dodecahedron",12}, {"Icosahedron",20}};
    int cnt=0;
    for(int i=0; i < n; i++){
        string s; cin >> s;
        cnt += m[s];
    }
    cout << cnt << endl;
    return 0;
}
