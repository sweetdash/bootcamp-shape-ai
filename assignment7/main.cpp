#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of array";
    int m;
    cin>>m;
    int arr[m];
    cout<<"Enter the elements of array:";
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    int first = 0, second = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[first])
        {
            second = first;
            first = i;
        }
        else if (arr[i] < arr[first])
        {
            if (second == -1 || arr[second] < arr[i])
                second = i;
        }
    }

    if (second == -1)
        cout << "Second Largest didn't exist";
    else
        cout << "Second largest : " << arr[second];
}
