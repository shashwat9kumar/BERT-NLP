#include<iostream>
#include<cstdlib>
using namespace std;


int main()
{
	int n,m;
	cout<<"Enter the number of rows and colums of the matrix:\n";
	cin>>m>>n;
	int maxlim=719*719;
	if(n*m >maxlim)
	{
		cout<<"Size entered is way too large to handle";
		exit(1);
	}
	int mat[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			mat[i][j]=rand() % 2;
		}
	}
	cout<<"your random matrix:\n\n\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
}
