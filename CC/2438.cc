#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    for (int j=1; j<N+1; j++){
        for (int i=1; i<j+1; i++){
            cout << '*';
        }
        cout << endl;
    }
}