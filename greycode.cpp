#include <iostream>
using namespace std;

int convert(int x)
{
	int x1=x>>1;
	int x2=x^x1;
	cout<<"The grey code equivalent is : "<<x2<<endl;
}

int main()
{
	cout<<"Input a number"<<endl;
	int n;
	cin>>n;
	convert(n);
	return 0;
}

