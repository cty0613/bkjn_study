#include <iostream>
using namespace std;

int main() {
    int n;
    int temp = 0;
    cin >> n;
    
    char seq[n];
    
    for (int i = 0; i < n; i++){
        cin >> seq[i];
    }
    
    for (int i = 0; i < n; i++){
        temp = temp + (seq[i]-'0');
    }
    
    cout << temp;
    return 0;
}
