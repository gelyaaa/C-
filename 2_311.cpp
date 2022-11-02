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
    int maxlen=0;
    int len=2;
    int ind;
    for (int i=0; i<n; i+=1){
        if ((arr[i+1]-arr[i])==(arr[i+2]-arr[i+1])){
            len+=1;
        }
        else{
            if (len>maxlen){
                ind = i+1;
                maxlen=len;
        }
            len=2;
        }   
    }
    cout<<"Arithmetic progression: ";
    for (int j=(ind-maxlen)+1; j<=ind; j++){
        cout<<arr[j]<<", ";
    }
}