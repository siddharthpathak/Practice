//Link: https://www.hackerearth.com/problem/algorithm/flowers-arrangement/

#include <iostream>
using namespace std;

int main()
{
    long long T, length,i=0;
    string s;
    cin>>T;
    while(T--)
    {
    	i=0;
    	cin>>s;
    	length=s.size();
    	while(i<length)
    	{
    	if( s[i]=='R' && s[i+1]=='Y' && s[i+2]=='Y')
    	i=i+3;
    	else if(s[i]=='R' && s[i+1]=='Y')
    	i=i+2;
    	else if(s[i]=='R')
    	i++;
    	else 
    	break;	
    	}
    	if(i==length)
    	cout<<("YES\n");
    	else
    	cout<<("NO\n");
    }
    
    return 0;
}

