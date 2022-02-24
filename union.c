#include<stdio.h>
union un
{
	short a;
	short b;
};
int main()
{
	union un var;
	var.a=10;
	printf("Value of b: %d\n",var.b);
	var.b=20;
	printf("Value of a: %d\n",var.a);
}
