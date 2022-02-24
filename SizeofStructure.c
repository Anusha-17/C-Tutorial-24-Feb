#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	float esal;
};
int main()
{
	struct emp e;
	printf("Size of emp:%d\n",sizeof(e));
	printf("Size of emp:%d",sizeof(struct emp));
	
}
