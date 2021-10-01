/*Given a string and n queries
Each query has L and R
Check if string is palindrome from L to R (rearranging is allowed)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, q;
		cin>>n>>q;
		string s;
		cin>>s;
		while(q--)
		{
		int hsh[26];
		for(int i=0;i<26;i++)
			hsh[i]=0;
		int l,r;
		cin>>l>>r;
		l--;
		r--;
		for(int i=l;i<=r;i++)
			hsh[s[i]-'a']++;
		int oddC=0;
		for(int i=0;i<26;i++)
		{
			if(hsh[i]%2!=0)
				oddC++;
		}
		if(oddC>1)
			cout<<"No\n";
		else
			cout<<"Yes\n";
		}
	}
}

