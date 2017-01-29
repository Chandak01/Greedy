#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;<n;i++)
		cin>>b[i];
	sort(a,a+n);
	sort(b,b+n);
	int i=0;
	int j=0;
	int count=0;
	for(int i=0;<n;i++)
	{
		cout<<a[i]<<" "<<b[i]<<endl;
	}

	while(i<n && j<n)
	{
		if(a[i]==b[j])
		{
			i++;
			j++;
			count++;
		}
		else if(a[i]<b[ij])
		{
			i++;
		}
		else j++;
	}
	if(count<n)
		count++;
	cout<<count<<endl;