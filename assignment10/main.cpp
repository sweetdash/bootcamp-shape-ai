#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    string s;
    cout<<"Enter string:";
    cin >> s;
    int ans = 0;
    int i;
    for (i = 0; i < s.length(); i++)
        {
        if (isupper(s[i]))
            ans++;
    }
    cout<<"The answer is:";
    cout<<ans+1;
    return 0;
}
