#include <iostream>
using namespace std;
int ceil(int a,int b)
{
	if((a+b)%2==0)
		return (a+b)/2;
	else return (a+b)/2+1;
}
int main()
{
	int n;
	cin>>n;
	int h[n];
	int i=0;
	for(i=0;i<n;i++)
		cin>>h[i];
	int e=0;
	for(i=n-2;i>=0;i--)
		e=ceil(h[i+1],e);
	e = ceil(h[i+1],e);
	cout<<e<<endl;
}