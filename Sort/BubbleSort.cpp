#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size)
{
	int temp;
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	int size,temp;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
		cin>>arr[i];
	bubbleSort(arr,size);
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	return 0;
}
