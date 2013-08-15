#include <stdio.h>
#include <stdlib.h>
int main()
{
	short n1=0x9156,n2=0x1023,n3=0x7849,Min;
_asm{
		MOV  AX, [n1]
		CMP  AX, [n2]
		JLE  next
		MOV  AX, [n2]
next:
		CMP  AX, [n3]
		JLE  next2
		MOV  AX, [n3]
next2:
		MOV  [Min], AX					
	}
printf("Min=%#hx\n",Min);

system("pause");
	return 0;
}
