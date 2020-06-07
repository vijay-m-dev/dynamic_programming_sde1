#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int l1,i,j;
	string s1;
	cout<<"Enter string"<<endl;
	cin>>s1;
	l1=s1.length();
	long long int mat[l1+1][l1+1];
	for(i=0;i<=l1;i++)
	{
		for(j=0;j<=l1;j++)
		{
			if(i==0 || j==0)
			{
				mat[i][j]=0;
			}
			else if(s1[i-1]==s1[j-1] && i!=j)
			{
				mat[i][j]=mat[i-1][j-1]+1;
			}
			else
			{
				mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
			}
		}
	}
	cout<<"The longest repeating subsequence length is: "<<mat[l1][l1]<<endl;
	return 0;
}
