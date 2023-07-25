#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int nxy,i,x[20];
	float Y,s,a,y[20],y1[20],y2[20],y3[20];
	int count=0,count2=0;
	cout<<"Enter the size of element of x and y:";
	cin>>nxy;
	cout<<"!!!!!Enter the element of X!!!!!\n";
	for(i=0;i<nxy;i++)
	{
		cin>>x[i];
	}
	cout<<"!!!!!Enter the element of Y!!!!!\n";
	for(i=0;i<nxy;i++)
	{
		cin>>y[i];
		cout<<"\n";
	}
	cout<<"___DY1.\n";
	for(i=0;i<nxy-1;i++)
	{
		y1[i]=y[i+1]-y[i];
		cout<<y1[i]<<"\n";
		count++;
	}
	cout<<"____Dy2.\n";
	
	for(i=0;i<count-1;i++)
	{
		y2[i]=y1[i+1]-y1[i];
		cout<<y2[i]<<"\n";
		count2++;
	}
	cout<<"___Dy3.\n";
	for(i=0;i<count2-1;i++)
	{
		y3[i]=y2[i+1]-y2[i];
		cout<<y3[i]<<"\n";
	}
	cout<<"Enter the value of x for y:";
	cin>>a;

	if(a<( x[nxy/2]))
    {
    	cout<<"___Using newton forward formula___\n";
    s=a-x[0];
	cout<<"S="<<s<<endl;
	Y=y[0]+(s*y1[0])+((s*(s-1)*y2[0])/2)+((s*(s-1)*(s-2)*y3[0])/6);
	cout<<"Y("<<a<<")="<<Y;
    }
    else
    {
    	cout<<"____Using Newton Backward formula__\n";
    	
    s=a-x[nxy-1];
	cout<<"S="<<s<<endl;
	Y=y[nxy-1]+(s*y1[nxy-2])+((s*(s-1)*y2[count-1])/2)+((s*(s-1)*(s-2)*y3[count2-1])/6);
	cout<<"Y("<<a<<")="<<Y;	
	}
    
	return 0;
}