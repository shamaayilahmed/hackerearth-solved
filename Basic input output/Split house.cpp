/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int l=s.length(),t=0;
	for(int i=0;i<l;++i){
		if(s[i]=='H' && s[i+1]=='H'){
			t=1;
			break;
		}
		else if(s[i]=='.')
			s[i]='B';
	}
	if(t==0){
		cout<<"YES"<<endl;
        cout<<s<<endl;
	}
	else
		cout<<"NO"<<endl;

}
