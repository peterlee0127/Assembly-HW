#include <stdio.h>
int main()
{
	int i=0,n=3,sum=0,x[]={2040,-1222,242};
	
	for(i;i<n;i++)
	{
		sum=sum+x[i];
	}	

	printf("sum=%d\n",sum);
	return 0;
}
