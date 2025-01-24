#include<bits/stdc++.h>
using namespace std;
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
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define co cout <<
#define en << endl
#define ci cin >>
#define tc int t; cin >> t;
#define forn for(int i=0; i<n; i++)
#define cn int n; cin >> n;
//***************************************************
//Author:         Md Mozammil Ali
//Institution:    IIIT Lucknow
//****************************************************
int32_t main(){
  fast
  tc
  while(t--){

    string s;
    cin >> s;
    if((s[0] == 'y'||s[0]== 'Y') && (s[1]=='E' || s[1]== 'e' )&& (s[2]=='S' || s[2]== 's')) cout << "YES"<< endl;
    else cout << "NO"<< endl;


  }
  return 0;
}