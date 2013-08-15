#include <stdio.h>
#include <stdlib.h>
int main()
{
	short v1=0x7800,v2=0x8010,Max;
	_asm{
			MOV AX,[v1]   
			MOV BX,[v2]	 
			CMP AX,BX
			JG middle
			MOV [Max],BX
			JMP ok
middle:		MOV [Max],AX
ok:
	}
	printf("Max=%#04hx\n",Max);
	system("pause");
	return 0;
}
