#include <iostream>

using namespace std;

int main(){
    int n;
    bool ex;
    cin >> n;
    ex = (n%4==0)&&(n%100!=0) || (n%400==0) ;
    if (ex) {cout << 1 << endl;}
    else { cout << 0 << endl; }

}