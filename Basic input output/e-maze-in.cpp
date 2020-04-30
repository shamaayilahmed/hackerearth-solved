#include <iostream>
#include<string>
using namespace std;
/*Ankit is in maze. The command c8enter sent him a string which decodes to come out from the maze.
He is initially at (0, 0). String contains L, R, U, D denoting left, right, up and down. 
In each command he will traverse 1 unit distance in the respective direction.

LOGIC consider the 2-D plane (x,y),like wise manipulate the string 
      L-decrement x
      R-increment x
      U-increment y
      D-decrement y
      
SAMPLE INPUT 
LLRDDR
SAMPLE OUTPUT 
0 -2
*/

int main()
{
    string code;
    getline(cin,code);
    int pointX=0,pointY=0;
    for(int i=0;i<code.length();i++){
        if(code[i]=='L')
            pointX--;
        else if(code[i]=='R')
            pointX++;
        else if(code[i]=='U')
            pointY++;
        else if(code[i]=='D')
            pointY--;
    }
    cout<<pointX<<" "<<pointY;
}
