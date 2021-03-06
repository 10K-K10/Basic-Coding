#include<iostream>
using namespace std;
void aSort(int arr[],int len)
{
	int temp;
	for(int i=0;i<len-1;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void binSearch(int arr[],int len, int srch)
{
	int lb=0,ub=len-1,mid;
	while(lb<=ub)
	{
		mid=lb+(ub-lb)/2;
		if(arr[mid]==srch)
		{
			cout<<"Search element "<<srch<<" found ";
			return ;
		}
		else if(arr[mid]>srch)
			ub=mid-1;
		else
			lb=mid+1;
	}
	cout<<"Search element "<<srch<<" not found";
}

int main()
{
	int len,search;
	cin>>len;
	int arr[len];
	for(int i=0;i<len;i++)
		cin>>arr[i];
	aSort(arr,len);
	cin>>search;
	binSearch(arr,len,search);
	return 0;
}
