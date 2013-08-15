#include <stdio.h>
int main()
{
	short n = 4;    	
	int i=1;
	short Max;
	short x[]={0xA484, 0x71AC, 0xE57A, 0x32F1};
	Max=x[0];
	for(i;i<n;i++)
	{
		if(x[i]>Max)
		{	Max=x[i];}
	}

	printf("Max=%#04x\n",Max);
	return 0;
}
