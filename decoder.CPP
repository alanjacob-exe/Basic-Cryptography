#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int i,rv,n,a[100];
	cout<<"enter your random number:";
	cin>>rv;
	cout<<"enter the limit:";
	cin>>n;
	cout<<"enter the codes";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	for(i=0;i<n;i++)
	{
		a[i]=a[i]-rv;
	}
	cout<<"\ndecoding your coded message\n";
		
	for(i=n-1;i>=0;i--)
	{
		cout<<char(a[i])<<"\t";
	}
	
	
    return 0;

}
