#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int h[t], w[t], n[t];
    
    for (int i = 0; i < t; i++){
        cin >> h[i] >> w[i] >> n[i];
    }
    
    for (int j = 0; j < t; j++){
        if (n[j] <= h[j]) { cout << n[j]*100 + 1 << endl;}
        else if (n[j]%h[j]==0) {cout << ((h[j])*100)+(n[j]/h[j]) << endl;}
        else { cout << ((n[j]%h[j])*100)+(n[j]/h[j]) + 1 << endl;}
    }
    return 0;
}
