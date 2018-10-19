#include <stdio.h>
int main()
{
	extern char a;
	extern void msg();
	printf("%c \n",a); 
	msg();
	return 0;
}
