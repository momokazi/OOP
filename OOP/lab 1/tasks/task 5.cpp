#include <iostream>
using namespace std;
int main()
{
	int A[20];
	cout<<"Enter 20 values: ";
	
	for(int i=0;i<20;i++)
	{
		cin>>A[i];
	}
		for(i=0;i<20;i++)
		
		{
			if(A[i]%2==0)
			
			{
				cout<<A[i]<<endl;
			}
	
		}
	
	return 0;
}

