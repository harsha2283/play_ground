#include<stdio.h>

#define p2var(datatype, storage_class, variable_usage) datatype*

int marco_function(int a,p2var(int, automatic, operand)b)
{
	int C = 0;
	C = a+b;
	return C;
}

int main()
{
	int x = 20;
	int y = 30;
	int  z= 0;
	z = marco_function(x,&y);
	printf("The output is :%d",z);
	return 0;
}
