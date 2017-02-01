#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	int i=0;
	for(i=0;i<n;i++)
		cin>>a[i];
	i=0;
    int j;
	int count=0;
    int found=0;
	int lastpole=-1;
	i = i+k-1;
	while(i<n)
	{
        found=0;
		if(a[i]==1)
		{
			count++;
			lastpole=i;
			i=i+2*k-1;
			found=1;
		}
        
		else
		{
			for(j=i-1;j>lastpole;j--)
			{
				if(a[j]==1)
				{
					count++;
					lastpole=j;
					i=j+2*k-1;
					found=1;
					break;

				}
			}
		}
        if(found==0){
            cout<<"-1"<<endl;
            return 0;
        }
	}
    
	if(lastpole<n-k)
	{     found=0;
		for(j=n-1;j>=n-k;j--)
		{
			if(a[j]==1)
			{
				count++;
				//lastpole=i;
				//i=+k-1;
				found=1;
				break;
			}
		}
	}
     if(found==0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
	cout<<count<<endl;
}
