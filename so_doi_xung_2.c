#include<stdio.h>
#include <cstdlib>

int lengthString (char a[])
{
	int i = 0;
	while( a[i] != '\0' )
	{
		i++;
	}
	return i;
}

bool laSoDoiXung(char a[])
{
	int len = lengthString(a);

		for( int i = 0; i < len/2; i++ )
	{
		if( a[i] != a[len - 1 - i] )	
			return false;
	}
	return true;
}

int main()
{
	char a_string[100];
	
	printf("Nhap vao so bat ki: ");
	scanf("%s", &a_string);
	int a_number = atoi(a_string);
	
	for (int i = 0; i < a_number; i++)
 	{
 		char i_string[20];
 		itoa(i, i_string, 10);
	  	if(laSoDoiXung(i_string))
			printf("%d\n", i);
	 }
	 return 0;
}
