#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int l1,l2,i,j;
	string s1,s2;
	cout<<"Enter string1"<<endl;
	cin>>s1;
	cout<<"Enter string2"<<endl;
	cin>>s2;
	l1=s1.length();
	l2=s2.length();
	long long int mat[l1+1][l2+1];
	for(i=0;i<=l1;i++)
	{
		for(j=0;j<=l2;j++)
		{
			if(i==0 || j==0)
			{
				mat[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1])
			{
				mat[i][j]=mat[i-1][j-1]+1;
			}
			else
			{
				mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
			}
		}
	}
	cout<<"The longest common subsequence length is: "<<mat[l1][l2]<<endl;
	return 0;
}
