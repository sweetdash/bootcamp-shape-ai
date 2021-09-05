#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter the year to check" << endl;
    cin>>year;
    if(year%400==0)
        cout<<"the year"<<year<<"is leap year";
    else if( year%100==0)
        cout<<"the year"<<year<<"is not leap year";
    else if( year%4==0)
        cout<<"the year "<<year<<" is leap year";
    else
        cout<<"the year"<<year<<"is not leap year";


    return 0;
}
