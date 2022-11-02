#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[20];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n-1;i++){
        for (int j=i+1; j<n; j++){
            if (arr[i]==arr[j]){
                cout<<"The elements are NOT different";
                return 0;
            }
        }
    }
    cout<<"The elements are different";
}