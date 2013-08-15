#include <stdio.h>
int main ()
{
	int n =3,cnt=0,i=0;	
	short x[] = { 0x0f1D , 0x7E0A , 0x824B } ;	
	for(i;i<n;i++)
	{
		if(x[i]<0)
		{cnt++;}
	}

	printf ("cnt = %d\n", cnt ) ;
	return 0 ;
}
