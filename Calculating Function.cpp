#include<bits/stdc++.h>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <queue>
#include <stack>
#include <iostream>
#include <list>
#include <iterator>
#include <tuple>
#include <random>
#include <thread>
#include <algorithm>
#include <array>
#include <string>
#include <cmath>
#include <vector>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>


// Define //
// template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
// using namespace __gnu_pbds;
 

#define pii pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vvi vector<vector<int>>
#define mii map<int,int>
#define msi map<string,int>
#define mci map<char,int>
#define mpi map<pair<int,int>,int>
#define si set<int>
#define smi multiset<int>
#define spi set<pair<int,int>>
#define smpi multiset<pair<int,int>>
#define up upper_bound
#define low lower_bound
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define pb push_back
#define pop pop_back()
#define ff first
#define ss second
#define be begin()
#define en end()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 

/*
**************************************************
Author:         Md Mozammil Ali
Institution:    IIIT Lucknow
**************************************************
*/

using namespace std;
void solve(){
    int n;
    cin >> n;
    if(n%2==0)
        cout << n/2 << endl;
    else
        cout << n/2 + (-1)*n << endl;
}
 
int32_t main(){
    fast
        solve();
        return 0;
}
