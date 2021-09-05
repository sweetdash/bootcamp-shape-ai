#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers\n";
    cin>>a>>b>>c;
    int big=big = a > b ? ( a > c ? a : c) : (b > c ? b : c) ;
    cout<<"The biggest number out of three is:-"<<big;

    return 0;
}
