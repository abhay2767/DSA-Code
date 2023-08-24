#include<stdio.h>
void foo(int array[], int length)
{
	int sum =0;
	int i,j;
	int product = 32;
	for(i = 0; i< length; i++)
	{
		sum += array[i];
	}
	for(j = 0; j< length; j++)
	{
		product *= array[j];
	}
}
int main()
{
	int arr[] = {3,5,66};
	foo(arr,3);
	return 0;
}
