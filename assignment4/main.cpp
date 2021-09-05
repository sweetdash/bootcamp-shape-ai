#include <iostream>

using namespace std;

int main()
{
    int n,t1=0,t2=1,t3;
    cout << "Enter the Nth term " << endl;
    cin>>n;
    cout<<t1<<"\t"<<t2<<"\t";
    for(int i=2;i<n;i++)
    {
        t3=t1+t2;
        cout<<t3<<"\t";
        t1=t2;
        t2=t3;
    }
    return 0;
}
