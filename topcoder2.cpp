/*Some people are sitting in a row. Each person came here from some country. You
have a theory that people from the same country are all sitting together. You
decided to test this theory. You asked each person the same question: "How
many people from your country (including you) are here?"

You are given a int[] a containing their answers. The answers are given in the
order in which the people sit in the row. (Note that some of the answers may be
incorrect. See the examples for clarification.)

If all the answers are consistent with your theory, return the number of
different countries that are present. (Given that all answers are consistent
with the theory, the number of countries can always be uniquely determined.)
Otherwise, return -1. */



#include<iostream>

int main()
{
	int a[20],i,j,value=0,n,temp,flag;
	std::cout<<"Enter number of elements\n";
	std::cin>>n;
	std::cout<<"Enter the array\n";
	for (i = 0; i < n; ++i)
	{
		std::cin>>a[i];
	}

	for (i = 0; i < n;)     //I think it can be optimized. Not sure.
	{
		flag=0;         
		temp=a[i];
		if(temp==1)
		{
			value=value+1;
			i=i+temp;
			continue;
		}
		else
		{
			for(j=1;j<temp;j++)
			{
				if(a[i]==a[i+j])
					flag=1;
				else
					flag=0;
			}
		}
		if(flag==1)
		{
			value=value+1;
			i=i+temp;
		}
		else
		{
			value=-1;
			break;
		}

	}

	std::cout<<"Value is "<<value<<std::endl;
	return 1;
}
