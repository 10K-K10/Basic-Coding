/*Given a 2D array of N*N, Q queries, in each query a, b, c and d, print sum of array from (a,b) to (c,d) // rectangle type, a,b= top left, c,d =bottom right

1<=N<=1e3
1<=a[i][j]=1e9
1<=q<=1e9
1<=a,b,c,d<=N

*/
//Time complexity= O(N^2) + O(Q) = O(N^2)

#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int pf[N][N];
int main()
{
	int n;
	cin>>n;
	int ar[n+1][n+1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			{
				cin>>ar[i][j];
				pf[i][j]=ar[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
			}
	}
	int q;
	cin>>q;
	while(q--)
	{
		int a, b, c,d;
		cin>>a>>b>>c>>d;
		cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1];
	}
}
