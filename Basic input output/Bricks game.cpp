#include<iostream>
using namespace std;

/*Patlu and Motu works in a building construction, they have to put some number of bricks N from one place to another,
and started doing their work. They decided , they end up with a fun challenge who will put the last brick.

They to follow a simple rule, In the i'th round, Patlu puts i bricks whereas Motu puts ix2 bricks.

There are only N bricks, you need to help find the challenge result to find who put the last brick.

Input:

First line contains an integer N.

Output:

Output "Patlu" (without the quotes) if Patlu puts the last bricks ,"Motu"(without the quotes) otherwise.

Constraints:

1 ≤ N ≤ 10000
--SAMPLE INPUT--

13

--SAMPLE OUTPUT--

Motu

Explanation

Sample Explanation:

13 bricks are there :

Patlu Motu

1 2

2 4

3 1 ( Only 1 remains)

Hence, Motu puts the last one.
*/

int main(){
	int bricks,sum;
	cin>>bricks;
	for(int i=1;i<=bricks;i++){
		sum +=i;
		if(sum>=bricks){
			cout<<"Patlu"<<endl;
			break;
		}
		else{
			sum+=i*2;
			if(sum>=bricks){
				cout<<"Motu"<<endl;
				break;
			}
		}
	}
	return 0;
}
