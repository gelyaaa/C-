#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool prost(int n){
    for (int i=2; i<=sqrt(n); i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int x, y;
    cout << "Enter two natural numbers: ";
    cin >> x >> y;
    
    if (prost(x)==true && prost(x)==true && abs(x-y)==2){
        cout << "Numbers are twins";
    }
    else{
        cout << "Numbers are NOT twins";
    }
}