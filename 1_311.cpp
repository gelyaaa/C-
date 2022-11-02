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
    cout<<"Three max numbers: ";
    for (int j=0; j<3; j++){
        int m=(-1000);
        int ind;
        for (int i=0; i<n; i++){
            if (arr[i]>=m){
                m=arr[i];
                ind=i;
            }
        }
        cout<<m<<" ";
        arr[ind]=(-999);
    }

}