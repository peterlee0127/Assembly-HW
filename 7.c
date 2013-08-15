#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int n = 6;
	int Pos, Zer,Negg;
	short Start[]={0x7602, 0x8D48, 0x2120, 0, 0xE605, 4};
_asm{
		MOV	ECX,[n]   
		SUB EBX,EBX
		MOV [Pos],0
		MOV [Zer],0
		MOV [Negg],0
begin:
		CMP Start[EBX],0
		JGE next
		INC [Negg]
		JMP end
next:
		JG next1
		INC [Zer]
		JMP end
next1:
		INC [Pos]
end:
		ADD EBX,2
		Loop begin
}
	printf("Pos=%d\n",Pos);
	printf("Zer=%d\n",Zer);
	printf("Negg=%d\n",Negg);
	system("PAUSE");
return 0;
}
