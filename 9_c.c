#include <stdio.h>
int main(void)
{
	int i=0;
	char Start[]="Hello 101+-*/, this is my first PROGRAM.";
	for(i;Start[i]!='\0';i++)
	{
		if(Start[i]>=65 && Start[i]<=90)
		{
			Start[i]+='\0';
			Start[i]=Start[i]+32;
		}
			printf("%c",Start[i]);
		
	}
	return 0;
}
