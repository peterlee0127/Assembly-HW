#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int i=0;
	char Start[]="Hello 101+-*/, this is my first PROGRAM.";
	_asm{
			SUB EBX,EBX
begin:
			CMP Start[EBX],0
			JE end
			CMP Start[EBX],65
			JL ok 
			CMP Start[EBX],90
			JG ok
			ADD Start[EBX],32
ok:
			INC EBX
			JMP begin
end:
		}
	for(i;Start[i]!='\0';i++)
	{printf("%c",Start[i]);}
	system("PAUSE");
return 0;
}
