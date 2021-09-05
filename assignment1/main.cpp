#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Numbers after swapping:- a="<<a<<"\t"<<"b="<<b;
    return 0;
}
