#include <iostream>
using namespace std;

int main() {
    int n;
    int id = 0;
    int temp = 0;
    
    for (int i=0; i<11; i++){
        cin >> n;
        if (n > temp) {
            temp = n; 
            id = i+1;
        }
    }
    cout << temp << endl << id << endl;
    return 0;
}
