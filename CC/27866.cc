#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int n;
    cin >> str;
    cin >> n;
    cout << str.substr(n-1, 1) << endl;
    
    return 0;
}
