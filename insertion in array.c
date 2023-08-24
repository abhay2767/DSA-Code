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
int IndexInsertion(int arr[],int size,int element,int capacity,int index)
{
	//Insertion
	if(size >= capacity)
	{
		return -1;
	}
	int i;
	for(i = size-1; i >= index; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[index] = element;
	return 1;
}
int main()
{
	int arr[100] = {7,8,12,27,88};//sorted array
	int size = 5;
	int element = 15;
	int index = 3;
	printf("Original Array:- "); 
	display(arr,size);
	IndexInsertion(arr,size,element,100,index);
	size += 1;
	printf("Updated array:- ");
	display(arr,size);
	
	return 0;
}
