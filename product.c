/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <stdio.h>
#include <stdlib.h>

int main()
{
	 int n,a[100005],i;
    long long int p=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        p=(p*a[i])%(1000000007);
    }
    printf("%d\n",p);
return 0;

}
