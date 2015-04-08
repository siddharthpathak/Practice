/*
  Approximation of Pi using Monte Carlo Method. MIT COURSE.
*/

#include<iostream>
#include<cstdlib>
#include<cmath> //sqrt
#include<ctime> //srand seed
using namespace std;

int main()
{
	srand(time(0));
	double x,y,a,pi;
	double dartin=0,n;
	cout<<"Enter n";
	cin>>n;
	for(int i=0;i<n;i++)
	{		
		x=rand()/double(RAND_MAX);
		y=rand()/double(RAND_MAX);
		if(sqrt(x*x + y*y)<1)
		{
			dartin++;
		}
	}
	a=(dartin/n);
	pi=a*4;
	cout<<pi<<endl;

  return 1;

}
