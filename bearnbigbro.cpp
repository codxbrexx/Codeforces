#include <bits/stdc++.h>
using namespace std;


// int main() {
//     int a,b;
//     cin >> a >> b;
//     int limak = a*3;
//     int bob = b*2;
//     if(a==b) cout << a ;
//     else{
//         cout << ceil(bob/limak);
//     }
//     return 0;
// }

int main() {
    int a,b;
    cin >> a >> b;
    int cnt = 0;
    while(a <= b) {
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}