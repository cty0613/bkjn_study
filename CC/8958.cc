#include <iostream>
#include <string>
using namespace std;

int main() {
    string ox;
    int t;
    cin >> t;
    int st;
    int score[t];
    
    for(int i=0; i<t; i++){
        cin >> ox;
        score[i] = 0;
        st = 1;
        for(int j=0; j<ox.length(); j++){
            if(ox[j] == 'O'){
                score[i] = score[i] + st;
                st++;
               
            }
            else if (ox[j] == 'X'){
                st = 1;
            }
        }
    }
    
    for(int k=0; k<t; k++){
        cout << score[k] << endl;
    }
}
