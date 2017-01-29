#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	long a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	long int fair = 1000000000
	for(int i=0;i<=n-k;i++)
		if(a[k+i-1]-a[i]<fair)
			fair=a[k+i-1]-a[i];
	cout<<fair<<endl;
}