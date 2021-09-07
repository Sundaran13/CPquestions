#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,id,is;
	cin>>n>>id>>is;
	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
			sum+=id;
		else
			sum+=is;
	}
	cout<<sum<<endl;
	}

}