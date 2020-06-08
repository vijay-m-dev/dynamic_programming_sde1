#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j,prod;
	cout<<"Enter number of elements: "<<endl;
	cin>>n;
	long long int arr[n];
	cout<<"Enter the elements: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the product: "<<endl;
	cin>>prod;
	long long int mat[prod+1][n+1];
	for(i=0;i<=prod;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0 || j==0)
			{
				mat[i][j]=0;
				continue;
			}
			mat[i][j]=mat[i][j-1];
			if(arr[j-1]<=i && arr[j-1]>0)
			{
				mat[i][j]+=mat[i/arr[j-1]][j-1]+1;
			}
		}
	}
	cout<<"The number subsequence having product less than k is: "<<mat[prod][n]<<endl;
	return 0;
}
