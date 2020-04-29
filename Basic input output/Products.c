#include <stdio.h>
#include <stdlib.h>

int main()
{
	 int n,a[100005],i;
    long long int p=1;
    scanf("%d",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        p=(p*a[i])%(1000000007);
    }
    printf("%d\n",p);
return 0;

}
