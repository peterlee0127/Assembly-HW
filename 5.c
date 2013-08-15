#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int n = 3 ;	
	int cnt ;	
	short x[] = { 0x0f1D , 0x7E0A , 0x824B } ;	
	_asm
	{
		SUB EBX , EBX         
		MOV ECX , [n]			
		MOV [cnt],0
begin:
		CMP x[EBX],0
		JGE ok
		INC [cnt]
ok:
		ADD EBX,2
		loop begin
	}
	printf ("cnt = %d\n", cnt ) ;
	system ("pause") ;
	return 0 ;
}
