/* TO count number of pairs which follows vowel at ith position and consonant at i+1 th position

TEST CASE
1
6       length of string
bazeci  input string
3       output    pairs:(b,a)(z,e)(c,i)
*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isvowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        return true;
    else
        return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,l,i=0,c;
    string s;
    cin>>t;
    while(t--){
        cin>>l;
        cin>>s;
        c=0;
        for(i=0;i<l-1;++i){
            if(isvowel(s[i])==0&&isvowel(s[i+1])==1)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
