#include <iostream>
#include <string>
using namespace std;
int main(){
    int daysWith;
    int dayInFeb;
    int day, month,year;
    cout << "Enter the date: ";
    cin >> day>>month>>year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        dayInFeb=29;
    }
    else{
        dayInFeb=28;
    }
    if (month<=2){
        daysWith=(month-1)*31 + day;
    }
    else{
        if (month%2==0){
             daysWith=(31+dayInFeb)+(31+30)*(month/2-1)-30+day;
        }
        else{
            daysWith=(31+dayInFeb)+(31+30)*((month-1)/2-1)+day;
        }
    }
    cout<<daysWith<<" days have passed";
    return 0;
}