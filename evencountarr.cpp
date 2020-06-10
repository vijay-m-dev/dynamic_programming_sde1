#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	long long int arr[n],arr1[n],i,c=0;
	cout<<"Enter the elements: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=n-1;i>=0;i--)
	{
		if((arr[i]&1)==0)
		{
			c++;
		}
		arr1[i]=c;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr1[i]<<" ";
	}
	return 0;
}
