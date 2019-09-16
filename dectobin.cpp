#include<iostream>

using namespace std;

void dectobin(int n)
{
	int bin[32];
	int i=0;
	while(n>0)
	{
		bin[i]=n%2;
		n=n/2;
		i++;
	}
	cout<<"The binary number is: "<<endl;
	for(int j=i-1;j>=0;j--)
	{
		cout<<bin[j];
	}
	cout<<endl;
}

int main()
{
	cout<<"Enter a number"<<endl;
	int n;
	cin>>n;
	dectobin(n);
	return 0;
	
}
