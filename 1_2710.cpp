#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"rus");
    double x;
    double eps;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter eps: ";
    cin>>eps;
    double x2 = x*x;
    int i = 1;
    double a = x;
    double sum = 0;
    while (abs(a) > eps) {
        sum += a;
        a *= ((-1)*x2) / (3*(i + 1)*(i + 2));
        i += 2;
    }

    cout<<sum;
}

    

