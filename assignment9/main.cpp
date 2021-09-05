#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of students:";
    cin >> n;
    cout<<"Enter the grades";
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        cin >> grade;
        if(grade<38 ||grade%5<3){
            cout<<grade<<endl;
        }else{
            grade+=(5-grade%5);
            cout<<grade<<endl;
        }
    }
    return 0;
}
