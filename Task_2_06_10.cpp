#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){ 
    double ax, bx, cx, ay, by, cy;
    cout << "Coordinates A: ";
    cin >> ax >> ay;
    cout << "Coordinates B: ";
    cin >> bx >> by;
    cout << "Coordinates C: ";
    cin >> cx >> cy;
    double ab=sqrt(pow((ax-bx),2)+pow((ay-by),2));
    double ac=sqrt(pow((ax-cx),2)+pow((ay-cy),2));
    double bc=sqrt(pow((cx-bx),2)+pow((cy-by),2));
    double p=(ab+ac+bc)/2;
    double S=sqrt(p*(p-ab)*(p-bc)*(p-ac));
    if ((pow(ab, 2) > (pow(bc, 2) + pow(ac, 2))) || (pow(ac, 2) > (pow(ab, 2) + pow(bc, 2)))){
        cout <<"Distance from A to BC: " << min(ab,ac);
    }
    else{
        cout << "Distance from A to BC: " <<(2*S)/bc;
    }
    return 0;
}