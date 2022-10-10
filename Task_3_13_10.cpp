#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int sumDel(int n){
    int s=0;
    for (int d=1; d<=n/2+1; d++){
        if (n%d == 0){
            s += d;
        }
    }
    return s;
}

int main(){ 
    int x, y;
    cout << "Enter two natural numbers: ";
    cin >> x >> y;
    if (sumDel(x)==y && sumDel(y)==x){
       cout << "Numbers are friendly";
    }
    else{
        cout << "Numbers are NOT friendly";
    }

}