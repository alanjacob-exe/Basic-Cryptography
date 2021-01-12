#include <iostream>
using namespace std;
char ref[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int main()
{
	int i,n,j,k,id,e;
	char a[100];
    cout<<"Emter your limit:";
	cin>>n;
	cout<<"Enter your elements:\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		j=i;
		
	}
	cout<<"Printing the elements\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<"\nTotal number of elements:"<<j+1;
	
	cout<<"\nTo print the middle element\n";
	k=n/2;
	if (n%2==1)
	{
		cout<<"\tThis is n:"<<n<<"\n";
		cout<<"\tThis is k:"<<k;
		
		cout<<"\n"<<"This is the middle element:"<<a[k]<<"\n";
		cout<<"ascii value of middle element is:"<<int(a[k])<<"\n";
	} else 
		{
		 cout<<"Element is even!!!\n";    //splitting an even array requires innovation
		 cout<<"Splitting the array....."<<"\n";
		 e=k-1;
		cout<<"\nPrinting respective element:"<<a[k-1];  //array starts from 0
		cout<<"\nPrinting the first half\n";
		 for(i=0;i<=e;i++)
		 {
			 cout<<a[i]<<"\n";
		}
		cout<<"Printing the second half\n";
		for(i=e+1;i<n;i++)
		{
			cout<<a[i]<<"\n";
		}
	}
//	cout<<"\nPrinting the referance array\n";
//	for(i=0;i<26;i++)
//	{ 
//		cout<<ref[i]<<"\n";
//	}
	cout<<"Checking the ref id\n";
	cout<<"Enter the number of alphabet to print:";
	cin>>id;
	if (id<26)
	{
		cout<<"\n"<<ref[id-1];   //array starts from 0
	} else {
		cout<<"Out of range";
	}
	
		return 0;
}
