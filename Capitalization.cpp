#include <iostream>
using namespace std;
#include <string>

int main() {
    string s;
    cin >> s;
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] -= 26;
    }
    cout << s << endl;

    return 0;
}
