#include <iostream>
#include <string>
using namespace std;
int main(){
    double x, y;
    double a;
    cout << "Enter the coordinates: ";
    cin >> x >> y;
    cout << "Enter the length of the side: ";
    cin >> a;
    double ay=a/2;
    double ax=a/2;
    if (x<=ax && x>=(-ax) && x<=ay && x>=(-ay)){
        if (x==ax || x==(-ax) || y==ay || y==(-ay)){
            cout <<"The point lies on the border of the square";
        }
        else{
           cout << "The point lies inside the square";
        }
    }
    else{
        cout <<"The point lies outside the square";
    }
}