#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w; 
    cin >> k >> n >> w;
    int ans = 0;
    for(int i=0; i<=w; i++){
         ans+=i*k;
    }
    cout << max(0,ans-n) << endl;
}