#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int size,zero=0,one=0,two=0;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
			
			if(arr[i]==0)
			zero++;
			
			if(arr[i]==1)
			one++;
			
			if(arr[i]==2)
			two++;
		}
		while(zero--)
		{ cout<<"0 ";}
		while(one--)
		{ cout<<"1 ";}
		while(two--)
		{ cout<<"2 ";}
	
	cout<<endl;
		
	}


	return 0;
}
