#include <stdio.h>
int main(void)
{
	int n = 6;
	int Pos=0, Zer=0,Negg=0;
	short Start[]={0x7602, 0x8D48, 0x2120, 0, 0xE605, 4};
	int i=0;
	for(i;i<n;i++)
	{
		if(Start[i]<0)
		{	Negg++;		}
		else if(Start[i]==0)
		{Zer++;	}
		else
		{	Pos++;		}
	}

	printf("Pos=%d\n",Pos);
	printf("Zer=%d\n",Zer);
	printf("Negg=%d\n",Negg);
return 0;
}
