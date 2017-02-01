#include <iostream>
using namespace std;

int main()
{
	int n;
	long long int k;
	cin>>n>>k;
	int a[n];
	int i=0;
	int index[n+1];
	if(k>=n-1)
	{
		for(i=n;i>0;i--)
			cout<<i<<" ";
		cout<<endl;
	}
    else
    {
    	for(i=0;i<n;i++){
			cin>>a[i];
			index[a[i]]=i;
    	}

    	for(i=0;i<n,k>0;i++)
    	{
    		if(a[i]==n-i)
    			continue;
    		a[index[n-i]]=a[i];
    		a[i] = n-i;
    		index[a[index[n-i]]] = index[n-i] ;
    		index[a[i]] = i;
    		k--;
    	}

		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
    }
}

