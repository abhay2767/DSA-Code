#include<stdio.h>
void func(int n)
{
	int sum=0;
	int product =0;
	int i,j;
	for(i = 0;i<i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d, %d\n",i,j);
			exit(0);//stop loop
		}
	}
}
int main()
{
	func(4);
	return 0;
}
