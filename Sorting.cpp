//Sorting Techniques

#include<iostream>

using namespace std;
void printarray(int arr[],int len)
{
	for(int i=0;i<len;i++)
	cout<<arr[i]<<endl;


}
void bubblesort(int arr[],int len)
{
	int i,j,temp;
	cout<<"Sorted Array is\n";
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main()
{
	int choice,i;
	int len,arr[10];
	cout<<"Enter length of array\n";
	cin>>len;
	cout<<"Enter array elements\n";
	for ( i = 0; i < len; ++i)
		cin>>arr[i];

	cout<<"1. Bubble Sort\n2. Selection Sort\n3. Merge Sort\n4. Quick Sort\nEnter Choice\n";
	cin>>choice;

	switch(choice)
	{
		case 1: 
				 bubblesort(arr,len);
				 printarray(arr,len);
				 break;
	}




	return 1;	
}
