#include <iostream>
#include <string>
using namespace std;
int main(){
    double ax1, ay1, ax2, ay2;
    double bx1, by1, bx2, by2;
    double S;
    cout << "Enter the coordinates of 1 rectangle: ";
    cin >>ax1>>ay1>>ax2>>ay2;
    cout << "Enter the coordinates of 2 rectangle: ";
    cin >>bx1>>by1>>bx2>>by2;
    double intersectionByX = min(ax2,bx2)-max(ax1,bx1);
    double intersectionByY = min(ay2,by2)-max(ay1,by1);
    if (intersectionByX<=0 || intersectionByY<=0){
        cout << "The rectangles do NOT intersect";
    }
    else{
        S=intersectionByX*intersectionByY;
        cout << "The rectangles intersect\n"<< "Intersection area: " << S;
    }
    return 0;
}