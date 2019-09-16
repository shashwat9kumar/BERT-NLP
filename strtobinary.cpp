#include<iostream>
#include <string>
#include <bits/stdc++.h>
#include<sstream>
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
	string str;
	cin>>str;
	reverse(str.begin(),str.end());
	cout<<"Reverse is : "<<str<<endl;
	stringstream sss(str);
	int x=0;
	sss >> x;
	dectobin(x);
	return 0;
}
