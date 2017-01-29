#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n,i;
		long k;
		cin>>n>>k;
		long a[n],b[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		for(i=0;i<n;i++)
			if(a[i]+b[i]<k)
				break;
		if(i>=n)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}