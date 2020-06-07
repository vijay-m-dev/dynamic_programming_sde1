#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j;
	cout<<"Enter the size: "<<endl;
	cin>>n;
	long long int arr[n],arr1[n],m=1;
	cout<<"Enter the elements: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		arr1[i]=1;
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j]<arr[i] && arr1[j]+1>arr1[i])
			{
				arr1[i]=arr1[j]+1;
			}
		}
		if(m<arr1[i])
		{
			m=arr1[i];
		}
	}
	cout<<m<<endl;
	return 0;
}
