#include<stdio.h>

int write_to_memory_block(char *str,int no_of_bytes)
{
	while(no_of_bytes != 0)
	{
		memory_block(&str);
		no_of_bytes--;
	}
	return 1;
}
