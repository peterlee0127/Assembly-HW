#include <stdio.h>
int main()
{
	char Value = 0x49;   	
	char _High, _Low;
	_High=(Value>>4)&0x0F;
	_Low=Value&0x0F;	
	

	printf("_High=%#04x\n",_High);
	printf("_Low=%#04x\n",_Low);

	return 0;
}
