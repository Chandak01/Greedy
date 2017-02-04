#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,i;
    cin>>n;
	long int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,greater<int>());
    for(i=0;i<n-2;i++)
    {
        if(a[i]<a[i+1]+a[i+2])
        {
                break;
        }
    }
    if(i>=n-2)
        cout<<"-1"<<endl;
    else cout<<a[i+2]<<" "<<a[i+1]<<" "<<a[i]<<endl;	
}