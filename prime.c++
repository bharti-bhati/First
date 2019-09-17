#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;


int main()
{
	
		int i=0,p=0,flag=0;
		cout<<"Enter a value:";
		cin>>p;
		for(i=2;i<=sqrt(p);i=i++)
	{
		
		if(p%i==0)
		{
		  flag=1;
		  break;}
	}
	
	if(flag==1)
	cout<<"not prime";
	else
	cout<<"prime";
	return 0;
}