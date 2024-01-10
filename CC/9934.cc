#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int Depth;
int Tree[2000];
vector<int> ANS[100];

void Divide(int left, int right, int height){
    if (left == right) return;
    int mid = (left + right) / 2;
    ANS[height].push_back(Tree[mid]);
    
    Divide(left, mid, height+1);
    Divide(mid+1, right, height+1);
}


int main() {
    cin >> Depth;
    
    int TreeSize = (int)pow(2, Depth) - 1;
    
    for(int i=0; i<TreeSize; i++){
        cin >> Tree[i];
    }
    Divide(0, TreeSize-1, 0);
    ANS[Depth-1].push_back(Tree[TreeSize-1]);
    for(int j=0; j<Depth; j++){
        for(int k=0; k<ANS[j].size(); k++){
            cout << ANS[j][k] << " ";
        
        }
        cout << endl;
    }
    
    
    
    
    
    
}
