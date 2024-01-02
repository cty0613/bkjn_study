#include <iostream>
using namespace std;

int main() {
    int t, r;
    string str;
    cin >> t;

    while (t--) {
        cin >> r >> str;
        for (int i = 0; i < str.length(); i++) {
            for (int k = 0; k < r; k++) {
                cout << str[i];
            }
        }
        cout << endl;
    }

    return 0;
}
