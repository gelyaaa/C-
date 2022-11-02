#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[10];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for (int i = 1; i<=n-1; i++){
        if ((arr[i] < arr[i + 1])==false) {
            cout<<"False";
            return 0;
        }
    }
    cout<<"True";
}