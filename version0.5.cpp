#include <iostream>
#include <cstring>
#include <ctime>
#include <string>
using namespace std;
char ref[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int main()
{
	int i,n,k,e;									//use id as a variable to check referance array
	int rv;
	char a[100];
	char s[100];
	srand(time(0));
	cout<<"enter your code:";
	cin.getline( s,99);
	n = strlen(s);								//strlen to remove "enter your limit"
	cout<<"\nthe word is:"<<s<<"\n";			//implementation of string function as a method to reduce complexity
												 
	for(i=0;i<n;i++)
	{
		a[i]=s[i];
	}
	cout<<"Printing the elements\n";
	
	for(i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}
	cout<<"\nTotal number of elements:"<<n;		//strlen to be implemented;
	
	cout<<"\nTo print the middle element\n";
	k=n/2;
	if (n%2==1)
	{
		cout<<"\tThis is n:"<<n<<"\n";				//strlen to be implemented;
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
	
	//cout<<"\nPrinting the referance array\n";
	//for(i=0;i<26;i++)
	//{ 
	//cout<<ref[i]<<"\n";
	//}
	//cout<<"Checking the ref id\n";
	//cout<<"Enter the number of alphabet to print:";
	//cin>>id;
	//if (id<26)
	//{
	//	cout<<"the alphabet with id"<<id<<"="<<ref[id-1]<<"\n"; //array starts from 0
		
	//} else
	//{
	//		cout<<"Out of range!!!/n";
	//}
	cout<<"Printing reverse order\n";
	for(i=n;i>=0;i--)
	{
		cout<<a[i]<<"\t";
	}
	cout<<"\nPrinting ascii values\n";
	for(i=0;i<n;i++)
	{
		cout<<int(a[i])<<"\t";
	}
	cout<<"\nPrinting the ascii value in reverse order\n";	
	for(i=n;i>0;i--)
	{ 
		cout<<int(a[i-1])<<"\t";
	}
	cout<<"\nBegining of simple encryption\n";
	for(int x = 1; x<2;x++)							//to create a computer generated random variable ie,"rv"
    {
		
        rv = 1+ (rand()%7);
        cout<<"Your randomly generated code is:"<<rv<<"\n";
    }
    cout<<"**** PLEASE NOTE ****"<<endl;
	cout<<"The Limit Is:"<<n<<"\n";
	cout<<"Random Code Is:"<<rv<<"\n";
	cout<<"Your Encrypted Code Is\n";
	for(i=n-1;i>=0;i--)								//addition of random variable with the ascii value							
	{
		if(i!=0)									//condition to print "." for the last element.
		{
		cout<<int(a[i]+rv)<<",";
		}
		else{
		cout<<int(a[i]+rv)<<"."<<"\n";					
		}
					
	}
	
		return 0;
}
