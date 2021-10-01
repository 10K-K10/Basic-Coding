/*You are given an array A of integers of size N. You will be given Q queries where each query is represented by two integers L, R.
 You have to find the gcd(Greatest Common Divisor) of the array after excluding the part from range L to R inclusive (1 Based indexing). 
You are guaranteed that after excluding the part of the array remaining array is non empty.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int ar[n+10],frwd[n+10],bkwd[n+10];
		frwd[0]=bkwd[n+1]=0;
		for(int i=1;i<=n;i++)
			cin>>ar[i];
		for(int i=1;i<=n;i++)
			frwd[i]=__gcd(frwd[i-1],ar[i]);
		for(int i=n;i>=0;i--)
			bkwd[i]=__gcd(bkwd[i+1],ar[i]);
		while(q--)
		{
			int l,r;
			cin>>l>>r;
			cout<<__gcd(frwd[l-1],bkwd[r+1]);
		}
	}
}
