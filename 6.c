#include <stdio.h>
#include <stdlib.h>
int main()
{
	short n = 4;    	
	short Max;
	short x[]={0xA484, 0x71AC, 0xE57A, 0x32F1};
	_asm{
			MOVZX ECX,[n]   ;ECX=n=4
			SUB EBX,EBX	   ;x[EBX]
			MOV AX,x[EBX]
begin:		
			CMP AX,x[EBX]
			JG next
			MOV AX,x[EBX]
next:
			ADD EBX,2
			loop begin
			MOV [Max],AX
	}
	printf("Max=%#04x\n",Max);
	system("pause");
	return 0;
}
