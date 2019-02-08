
#include<iostream>
#include<cstdio>
using namespace std;
int map[500][500];
int main()
{
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>map[i][j];
		}
	}
	
	return 0;
}