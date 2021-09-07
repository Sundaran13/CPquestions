#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	bool temp=0;
	if(a+b<=d && c<=e)
	{
		temp=1;
	}
	else if(a+c<=d && b<=e)
	{
		temp=1;
	}
	else if(b+c<=d && a<=e)
	{
		temp=1;
	}
	else
	{
		temp=0;
	}
	if(temp==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	}

}