======================================================
1: 
       
Example:

	char Value = 0x49;   	char _High, _Low;
Result:

	_High = 0x04;   	_Low = 0x09;
======================================================
2: Find the max


Example:

	short v1 = 0x7800;  	short v2 = 0x8010;
	short Max;
	
Result:   

	Max = 0x7800;

======================================================
3: Find the minimum


Example:

	short n1 = 0x9156;  	short n2 = 0x1023;
	short n3 = 0x7849;    short Min;
Result:  

 	Min = 0x9156;

======================================================
4: Save the data

       
Example:

	int n=3;	// num of elements
	int sum;	// sum
	int x[]={2040,-1222,242};	/data
	
Result:

	sum = 2040 - 1222 + 242;
	
======================================================
5: Num of negative numbers
	  
Example:

	int n=3;	// num of elements
	int cnt;	// num of negative numbers
	short x[]={0x0f1D, 0x7E0A, 0x824B}	// data
	
Result: 

 	cnt = 1

======================================================
6: Find  the max

       
Example:

	short n = 4;    	short Max;
	short x[]={0xA484, 0x71AC, 0xE57A, 0x32F1};
	
Result:  

	Max = 0x71AC

======================================================
7: Get the number
       
Example:

	int n = 6;
	int Pos;  	int Zer;  	int Negg;
	short Start[]={0x7602, 0x8D48, 0x2120, 0, 0xE605, 4};
	
Result:

    	Pos  = 3 (4)
    	Zer  = 1       	Negg = 2
======================================================
8: Length of ASCII
      
Example:

	char Start[]="Hello, this is my first program";
	int Len;
	
Result:      

 	Len=31;

======================================================
9: Lowercase
      
Example:

	char Start[]="Hello 101+-*/,vthis is my first PROGRAM.";
Result:

	char Start[]="hello 101+-*/, this is my first program.";
	
======================================================
10: Binary to ASCII
      
Example:

	char number = 0x5a;   	char Start[8];
Result:

	Start[0]=0x30; Start[1]=0x31; Start[2]=0x30; Start[3]=0x31;
	Start[4]=0x31; Start[5]=0x30; Start[6]=0x31; Start[7]=0x30;
 ======================================================

