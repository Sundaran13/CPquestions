#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int e1=0,e2=0,o1=0,o2=0;
		e1=n/2;
		o1=n/2+n%2;
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2==0)
				e2=e2+1;
			else
				o2=o2+1;
		}
		int x=0;
		if(e2-o1>0)
		{
			x=e2-o1;
		}
		if(o2-e1>0)
		{
			x=o2-e1;
		}
		cout<<n-x<<endl;
	}
}