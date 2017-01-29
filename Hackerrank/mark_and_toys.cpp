#include <iostream>
using namespace std;

void merge(int a[],int l,int m,int h)
{
	int p;
	int i=l;
	int j = m+1;
	int c[h-l+1];
	int k=0;
	while(i<=m && j<=h)
	{
		if(a[i]<=a[j])
			c[k++]=a[i++];
		else
			c[k++] = a[j++];
	}
	if(i>m)
		while(j<=h)
			c[k++] = a[j++];
	else if(j>h)
		while(i<=m)
			c[k++]=a[i++];
	for(i=0;i<k;i++)
		a[l++]=c[i];
}

void sort(int a[],int l,int h)
{
	if(l<h)
	{
		int m = l+(h-l)/2;
		sort(a,l,m);
		sort(a,m+1,h);
		merge(a,l,m,h);
	}
}

int main()
{
	int n;
	long k;
	cin>>n>>k;
	int i;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,0,n-1);
	i=0;
	int count=0;
	cout<<endl;
	while(k>=0)
	{
		k-=a[i++];
		count++;
	}
	cout<<count-1<<endl;
}