//Sorting Techniques

#include<iostream>

using namespace std;
void printarray(int arr[],int len)
{
	cout<<"Sorted Array is\n";
	for(int i=0;i<len;i++)
	cout<<arr[i]<<endl;
}
void bubblesort(int arr[],int len)
{
	int i,j,temp;
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

void selectionsort(int arr[],int len)
{

	int i,j,min,temp;
	for(i=0;i<len-1;i++)
	{
		min=i;
		for(j=i+1;j<len;j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		if(min!=i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;	
		}	
	}
}

void insertionsort(int arr[],int len)
{
	int i,j,key;
	for(i=1;i<len;i++)
	{
		key=arr[i];
		j=i;

		while(key<arr[j-1] && j>0)
		{
			arr[j]=arr[j-1];
			j=j-1;
		}
		arr[j]=key;
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

	cout<<"1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Merge Sort\n5. Quick Sort\nEnter Choice\n";
	cin>>choice;

	switch(choice)
	{
		case 1: 
				 bubblesort(arr,len);
				 printarray(arr,len);
				 break;
		case 2:
				 selectionsort(arr,len);
				 printarray(arr,len);
				 break;
		case 3:
				 insertionsort(arr,len);
				 printarray(arr,len);
				 break;
	}




	return 1;	
}
