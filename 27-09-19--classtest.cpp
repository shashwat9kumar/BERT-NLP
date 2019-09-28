#include<iostream>
#include<float.h>
using namespace std;

int main()
{
	int x[]={2,1,12,20,21,32,22,42,12,52};
	int y[]={4,3,4,14,24,54,54,24,44,48};
	
	int n=10;
	
	
	cout<<"Your entered points are:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<" , "<<y[i]<<endl;
	}
	cout<<endl;
	
	int maxx[3],maxy[3],minx[3],miny[3];
	
	float areamax=0.0,areamin=FLT_MAX;
	
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++) 
		{
			for(int k=j+1;k<n;k++)
			{
				float area=x[j]*y[k]-x[k]*y[j] - x[i]*y[k]+x[k]*y[i] + x[i]*y[j]-x[j]*y[i];
				area=0.5*area;
				if(area<0)
				{
					area=-area;
				}
				
				
				if(area>areamax)
				{
					areamax=area;
					maxx[0]=x[i];
					maxx[1]=x[j];
					maxx[2]=x[k];
					maxy[0]=y[i];
					maxy[1]=y[j];
					maxy[2]=y[k];
					
				}
				if(area<areamin)
				{
					areamin=area;
					minx[0]=x[i];
					minx[1]=x[j];
					minx[2]=x[k];
					miny[0]=y[i];
					miny[1]=y[j];
					miny[2]=y[k];
				}
			}
		}
	}
	cout<<endl;
	cout<<"The maximum area is :"<<areamax<<endl;
	cout<<"The points for the same are:"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<maxx[i]<<" , "<<maxy[i]<<endl;
	}
	cout<<endl;
	
	
	cout<<"The minimum area is :"<<areamin<<endl;
	cout<<"The points for the same are:"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<minx[i]<<" , "<<miny[i]<<endl;
	}
	
	return 0;
}
