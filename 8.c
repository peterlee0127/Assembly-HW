#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	char Start[]="Hello, this is my first program";
	int Len;
	_asm{
			SUB EBX,EBX
			MOV [Len],0
begin:
			CMP Start[EBX],0
			JE end
			INC [Len]
			ADD EBX,1
			JMP begin
end:
	}
	printf("Len=%d\n",Len);
	system("PAUSE");
return 0;
}	
