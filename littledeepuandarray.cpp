#include <iostream>
using namespace std;

int main()
{
	long long int N,A[100010],x,M,i;
	cin>>N;
	for(i=0;i<N;i++)
	cin>>A[i];
	cin>>M;
	while(M--)
	{
		cin>>x;
		for(i=0;i<N;i++)
		if(A[i]>x)
		A[i]--;
	}
	for(i=0;i<N;i++)
	cout<<A[i]<<" ";
    //cout << "Hello World!" << endl;
    return 0;
}
