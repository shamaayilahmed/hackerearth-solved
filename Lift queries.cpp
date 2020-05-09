#include<bits/stdc++.h>
using namespace std;
/*
There are 7 floors in BH3 and only 2 lifts. Initially Lift A is at the ground floor and Lift B at the top floor. 
Whenever someone calls the lift from N th floor, the lift closest to that floor comes to pick him up.
If both the lifts are at equidistant from the N th floor, them the lift from the lower floor comes up.

SAMPLE INPUT 
2
3
5
SAMPLE OUTPUT 
A
A
Explanation
3rd floor calls, Lift A(0) goes there.

5th  floor calls, Lift A(3) and Lift B(7) are equidistant from 5, so Lift from lowest floor goes there i.e. A.
*/


int main(){
	int floor,liftA=0,liftB=7,test;
	int distA,distB;
	cin>>test;
	while(test--){
		cin>>floor;
		distA=abs(liftA-floor);
		distB=abs(liftB-floor);
		if(distA<=distB){
			cout<<"A"<<endl;
			liftA=floor;
		}
		else{
			cout<<"B"<<endl;
			liftB=floor;
		}
	}
	cout<<endl;
}
