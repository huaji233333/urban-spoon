/*https://github.com/huaji233333/urban-spoon*/
/*v0.1-release*/
#include <iostream>
using namespace std;
int main()
{	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{	if(i%2==1)
		{
		for(int j=(n-i)/2;j>=1;j--)
		cout<<" ";
		for(int q=1;q<=i;q++)
		cout<<"*";
		cout<<endl; 
		}	
	}; 
	for(int i=1;i<=n/3;i++)
	{	for(int i=1;i<=n/2-1;i++)
			cout<<" ";
		cout<<"| |"<<endl;
	}; 
	system("pause");
	return 0;
}
