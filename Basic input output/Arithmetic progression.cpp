#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*You will be given three numbers A,B,C .You can perform the following operation on these numbers any number of times.You can take any integer from A, B, C and you can add or substract 1 from it.

Each operation cost 1sec of time(say). Now you have to determine the minimum time required to change those numbers into an Arithmetic Progression.

i.e B-A=C-B

Input :
First line of input contains T denoting number of test cases.

Next T lines contains space seperated integers A,B,C

Output :
For each test case, print a single line containing one integer — the minimum time require to change A,B,C into an arithmetic progression.

Constraints :


SAMPLE INPUT
5
-5 0 5
-5 7 6
-10 -100 20
1 -1 1
51 23 10
SAMPLE OUTPUT
0
7
105
2
8
Explanation
Example case 1: No operations are needed because 0-(-5) = 5-0.

Example case 2: We can obtain an arithmetic progression in seven operations by adding 1 to A = -5 and subtracting 1 six times from B = 7.

Example case 3: We should add 1 to B 105 times.
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll a,b,c;cin>>a>>b>>c;
        ll ba,cb;
        ba=b-a;cb=c-b;
        if(ba==cb){
            cout<<"0\n";
        }
        else{
            ll val=ceil(abs((float)(ba-cb)/2));
            cout<<val<<endl;
        }
    }
    return 0;
}
