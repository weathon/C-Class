
#include<iostream>
#include<cstdio>
using namespace std;
int n;
int main()
{
	cout<<"How many rows do you want? "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}