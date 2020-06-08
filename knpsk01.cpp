#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,j;
	cout<<"Enter number of items: "<<endl;
	cin>>n;
	long long int wt[n],pro[n],cost;
	cout<<"Enter the weight and profit of each item:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>wt[i]>>pro[i];
	}
	cout<<"Enter the total cost: "<<endl;
	cin>>cost;
	long long int mat[n+1][cost+1];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=cost;j++)
		{
			if(i==0 || j==0)
			{
				mat[i][j]=0;
			}
			else if(wt[i-1]>j)
			{
				mat[i][j]=mat[i-1][j];
			}
			else
			{
				mat[i][j]=max(pro[i-1]+mat[i-1][j-wt[i-1]],mat[i-1][j]);
			}
		}
	}
	cout<<"The maximum profit is: "<<mat[n][cost]<<endl;
	return 0;
}
