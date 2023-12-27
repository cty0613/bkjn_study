#include <iostream>
using namespace std;

int main() {
    int n, tmin, tmax;
    cin >> n;
    int list[n];
    
    for (int i=0; i<n; i++){
        cin >> list[i];
    }
    
    tmin = list[0];
    tmax = list[0];
    for (int j=0; j<n; j++){
        if (tmax < list[j]) {tmax = list[j];}
        if (tmin > list[j]) {tmin = list[j];}
    }
    cout << tmin << " " << tmax << endl;
    return 0;
}
