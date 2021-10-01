/* An array of n integers, given q queries and in each query print the sum of indexes L to R

1<=n<=10^5
1<=a[i]<=10^9
1<=q<=10^5
1<=L && R<=n
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int pf[N];
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i =1;i<=n;i++){		// 1 Based array bcoz. of given condition
		cin>>a[i];
		pf[i]=pf[i-1]+a[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		cout<<pf[r]-pf[l-1];
	}
}
