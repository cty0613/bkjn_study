#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i=1; i<n+1; i++){
        for (int j=n-i; j>0; j--){
            cout << " ";
        }
        for (int k=1; k<i+1; k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
