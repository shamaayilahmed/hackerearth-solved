#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        //cout<<s[i];

        if(s[i]>='a' && s[i]<='z'){
            s[i] -= 32;
        }
        else if(s[i]>='A'&& s[i]<='Z'){
            s[i] += 32;
        }
    }
    //cout<<s;
    cout<<s;
}
