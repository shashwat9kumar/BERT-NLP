 #include<iostream>

using namespace std;

void dectobin(int n)
{
	int bin[32];
	
	for(int p=0;p<32;p++)
	bin[p]=0;
	
	
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
	
	for(int j=i-1;j>=0;j--)
	{
		if(bin[j]==0)
		bin[j]=1;
		else
		bin[j]=0;
	}
	
	cout<<"The 1's compliment of binary number is: "<<endl;
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
