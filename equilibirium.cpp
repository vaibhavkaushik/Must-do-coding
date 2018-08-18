using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int size,aiwanyi,found=0;
		cin>>size;
		
		if(size==1)
		{
		   cin>>aiwanyi;
		   cout<<"1"<<endl;
		 
		}
		
		else
		{
			int arr[size];
			int prefix[size]={0},suffix[size]={0};
			
			for(int i=0;i<size;i++)
			cin>>arr[i];
			
			prefix[0] = arr[0];
			for(int i=1;i<size;i++)
			prefix[i] = prefix[i-1] + arr[i];
			
			
			suffix[size-1] = arr[size-1];
			for(int i=size-2;i>=0;i--)
			suffix[i]= suffix[i+1] + arr[i];
			
			
			for(int i=0;i<size;i++)
			{
			  
				if(prefix[i]==suffix[i])
			          {	cout<<i+1<<endl;
				found=1;
				break;
			          }
			}
			
			if(!found)
			cout<<"-1"<<endl;
			
		}
	}
	
	return 0;
}
