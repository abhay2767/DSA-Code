#include<stdio.h>

void display(int arr[], int n)
{
	//Traversal
	int i;
	for(i =0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf(" \n");	
}
void IndexDeletion(int arr[],int size,int index)
{
	//Deletion
	int i;
	for(i = index; i < size-1; i++)
	{
		arr[i] = arr[i+1];
	}

}
int main()
{
	int arr[100] = {7,8,12,27,88};//sorted array
	int size = 5;
	int element = 12;
	int index = 3;
	printf("Original Array:- "); 
	display(arr,size);
	IndexDeletion(arr,size,index);
	size -= 1;
	printf("Updated array:- ");
	display(arr,size);
	
	return 0;
}
