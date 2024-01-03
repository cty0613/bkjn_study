#include <iostream>
using namespace std;

int main() {
    int n[10];
    int r[10];
    int tokens[42] = {0,};
    int count = 0;
    
    for(int i=0; i<10; i++){
        cin >> n[i];
        r[i] = n[i]%42;
    }
    
    
    for(int k=0; k<10; k++){
        tokens[r[k]] = 1;
    }
  
    for(int j=0; j<42; j++){
        if(tokens[j] == 1) count++;
    }
    
    cout << count << endl;
}
