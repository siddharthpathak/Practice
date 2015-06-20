#include<iostream>

using namespace std;

int main()

{
	int i,j,k,n;
	cout<<"Enter number of rows\n";
	cin>>n;


	for(i=1;i<=n;i++)
	{	

	   for(k=0;k<n-i;k++)
	   cout<<" ";		
	   for(j=0;j<i;j++)
	   {
	   	cout<<"#";  		
	   }
	    cout<<" ";
	   for(j=0;j<i;j++)
	   	cout<<"#";
	   
	   cout<<"\n";
	}


	return 1;

}
