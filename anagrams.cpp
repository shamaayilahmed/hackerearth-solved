//#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
//const int CHAR=26;

int remana(string str1,string str2){
int count1[26]={0},count2[26]={0};

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

