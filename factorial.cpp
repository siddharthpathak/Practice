
#include <iostream>
using namespace std;

int main()
{
	int T,N,a[200],m,temp,index,x,i;
	cin>>T;	
	while(T--)
	{
		cin>>N;
		m=1;
		i=1;
		a[0]=1;
		temp=0;
		index=0;
		while(i<=N)
		{
			for(int j=0;j<m;j++)
			{
			x=a[j]*i+temp;
			a[j]=x%10;
			temp=x/10;
			}
			while(temp>0)
			{
			  a[m]=temp%10;
			  temp=temp/10;
			  m++;
			}
			i++;
		}
			for(int k=m-1;k>=0;k--)
			cout<<a[k];
			cout<<endl;
		
		
		
	}
    
    return 0;
}


