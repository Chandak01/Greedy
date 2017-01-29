#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

void merge(int a[], int l ,int m, int h)
{	
	int p;
	int c[h-l+1];
	int i=l;
	int j=m+1;
	int k=0;
	while(i<=m && j<=h)
	{
		if(a[i]<=a[j])
		{
			c[k] = a[i];
			i++;
			k++;
		}
		else
		{
			c[k] = a[j];
			j++;
			k++;
		}
	}

	if(i>m)
	{
		while(j<=h)
		{
			c[k] = a[j];
			j++;
			k++;
		}
	}
	else if(j>h)
	{
		while(i<=m)
		{
			c[k] = a[i];
			i++;
			k++;
		}
	}
	
	int d = l;
	for(i=0;i<k;i++)
	{
		a[l++] = c[i];

	}
	
	return;
}

void sort(int a[],int l,int h)
{
	
	if(l<h)
	{
		int m = l + (h-l)/2;
		sort(a,l,m);
		sort(a,m+1,h);
		merge(a,l,m,h);
	}
	return;
}

int main()
{
 	int n,k;
 	cin>>n>>k;
 	int i=0;
 	long long int total = 0;
 	int a[n];
 	int q,w;
 	int z=0;
 	while(i<n)
 	{
 		cin>>q>>w;
 		if(w==1)
 		{
 			a[z++] = q;
 		}
 		else
 		{ 
 			total +=q;
 		}
 		i++;
 	}

 	sort(a,0,z-1);
 	
 	if(z-k>=0)
 	{
 		for(i=z-k;i<z;i++)
 			total+=a[i];
 		for(i=0;i<z-k;i++)
 		{
 			total-=a[i];
 		}
 	}
 	else
 	{
 		for(i=0;i<z;i++)
 			total+=a[i];
 	}
 	cout<<total<<endl;
}