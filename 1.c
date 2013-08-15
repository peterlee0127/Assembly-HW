#include <stdio.h>
#include <stdlib.h>
int main()
{
	char Value = 0x49;   	
	char _High, _Low;
	_asm{
			MOV AH,[Value]
			SHR AH,4
			AND AH,0FH
			MOV [_High],AH		

			MOV AH,[Value]
			AND AH,0FH
			MOV [_Low],AH	
	}
	printf("_High=%#04x\n",_High);
	printf("_Low=%#04x\n",_Low);

	system("pause");
	return 0;
}
