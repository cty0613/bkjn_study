#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int nums[n];
    for (int i = 0; i<n; i++){
        cin >> nums[i];
    }
    
    for(int j = 0; j<n; j++){
        if(nums[j] < x){cout << nums[j] << " ";}
    }
    cout << endl;
}
