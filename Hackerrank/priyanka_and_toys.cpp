#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
    cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int i=0;
    int count=0;
    int j=0;
	while(i<n)
	{
		count++;
		j=i+1;
		while(a[j]<=a[i]+4)
		{
			j++;
		}
		i=j;
	}
	cout<<count<<endl;
}