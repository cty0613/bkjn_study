#include <iostream>
using namespace std;

int main() {
    int h, m;
    int ah, am;
    cin >> h >> m;
    
    am = m - 45;
    ah = h;
    if (am < 0) {
        am += 60;
        ah--;
        if (ah < 0) {
            ah += 24;
        }
    }
    
    cout << ah << " " << am << endl;
    return 0;
}
