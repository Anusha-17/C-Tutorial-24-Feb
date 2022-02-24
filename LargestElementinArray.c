#include<stdio.h>
int main()
{
	int large,i;
	int arr[7]={7,13,21,16,9,31,24};
	large=arr[0];
	for(i=0;i<7;i++)
	{
		if(arr[i]>large)
		{
			large=arr[i];
		}
	}
	printf("Large = %d\n",large);
}
