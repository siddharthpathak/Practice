//Link: https://www.hackerearth.com/problem/algorithm/the-best-internet-browser-3/

#include<iostream>
using namespace std;

int main()
{
	int T,len,value1=0;
	string s;
	cout<<"Enter number of test cases\n";
	cin>>T;
	while(T--)
	{
		value1=0;
	  cout<<"Enter String\n"
	  cin>>s;
	  len=s.size();
	  for(int i=4;i<len-4;i++)
	  {
	   	if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	   	{
	   	  value1++;
	   	}
	  }
	  value1=len-value1-4;
	  cout<<value1<<"/"<<len<<endl;

	}
}
