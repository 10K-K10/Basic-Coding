#include<iostream>
using namespace std;
void lnSearch(int arr[],int len,int srch)
{
	for(int i=0;i<len;i++)
	{
		if(arr[i]==srch)
		{
			cout<<"Search Element "<<srch<<" found at index "<<i;
			return ;
		}
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
	cin>>search;
	lnSearch(arr,len,search);
	return 0;
	
}
