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
//#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
//const int CHAR=26;

int remana(string str1,string str2){
int count1[80]={0},count2[80]={0};

for(int i=0;str1[i]!='\0';i++)
    count1[str1[i]-'a']++;

for(int i=0;str2[i]!='\0';i++)
    count2[str2[i]-'a']++;

int result=0;
for(int i=0;i<26;i++)
    result+=abs(count1[i]-count2[i]);
return result;

}

int main()
{
    string str1,str2;
    int t;
    cin>>t;
    while(t--){
    //getline(cin,str1);
    //getline(cin,str2);
    cin>>str1;
    cin>>str2;
    cout<<remana(str1,str2);
    }
    return 0;
}

