#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d;
    cout<<"Enter n and d\n";
    cin>> n >>d;
    int arr[n]={0};
    cout<<"Enter the array\n";
    for(int i=0;i<n;i++){
        cin>> arr[(i+n-d)%n];
    }
    for(int i=0;i<n;i++)
        cout<< arr[i]<<" ";
    return 0;
}
