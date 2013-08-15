#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n=3,sum,x[]={2040,-1222,242};
_asm{
		MOV ECX,[n]
		SUB EAX,EAX  
		SUB EBX,EBX  
begin:
		ADD EAX,x[EBX]
		ADD EBX,4
		Loop begin
		MOV [sum],EAX
	}
	printf("sum=%d\n",sum);
	system("pause");
	return 0;
}
