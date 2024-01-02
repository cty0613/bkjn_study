#include <iostream>
using namespace std;

int main() {
    int scale[8];
    int flow = 8;
    
    for(int i=0; i<8; i++){
        cin >> scale[i];
    }
    
    for(int j=0; j<8; j++){
        if (scale[j] + 1 == scale[j+1]) {flow++;}
        else if (scale[j] - 1 == scale[j+1]) {flow--;}
    }
    
    if (flow == 1) {cout << "descending" << endl;}
    else if (flow == 15) {cout << "ascending" << endl;}
    else {cout << "mixed" << endl;}
}
