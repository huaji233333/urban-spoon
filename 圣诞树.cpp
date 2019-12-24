#include <iostream>
using namespace std;
int main()
{
	int n=10;
	/*for(int i=1;i<=n;i++)
	{	for(int j=n;j<=n;j++)
		{
		cout<<" ";
	}}; */
	
	for(int i=1;i<=n;i++)
	{	for(int j=i/2;j<=n;j++)
		{
		cout<<" ";
		}
		for(int j=n-i+1;j<=n;j++)
		{
		cout<<"*";
		}	
		cout<<endl; 
	}; 
	for(int i=1;i<=n/2;i++)
		{cout<<"          ";
		cout<<"||"<<endl;
		}



	return 0;
}
