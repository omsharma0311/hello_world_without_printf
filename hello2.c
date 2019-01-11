#include<stdio.h>
int main(void)
{
	char *s="Hello World\n";
	while(*s!='\0')
		putchar(*s++);

	return 0;
}