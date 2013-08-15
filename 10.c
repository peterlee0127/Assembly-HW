#include <stdio.h>
#include <stdlib.h>
int main()
{
		char number = 0x5a;   	char Start[8];
		int i;
		_asm{
				MOV ECX,8
				MOV AH,[number]
begin:			
				MOV AL,AH
				AND AL,1
				OR AL,0x30
				MOV Start[ECX-1],AL
				SHR AH,1
				loop begin
		}
		for(i=0;i<8;i++)
		{	printf("Start[%d]=%#04x\n",i,Start[i]);	}
		system("pause");
		return 0;
}
