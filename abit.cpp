#include <bits/stdc++.h>
using namespace std;
int main(){
    // int n; cin >> n;
    // int x = 0;
    // while(n--){
    // string s;
    // cin >> s;
    // if(s[0] == 'X' && s[1] == '+'|| s[0] == '+') x++;
    // else if(s[0] == 'X' && s[1] == '-' || s[0] == '-') x--;
    // }
    // cout << x << endl;
    int a, b , c; cin >> a >> b >> c;
    cout << min(a, min(b,c));
}
