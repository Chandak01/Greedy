#include <iostream>
#include <algorithm>
//#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s[n];
		string ans = "YES\n";
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
			sort(s[i].begin(),s[i].end());
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-1;j++)
			{
				if(s[j][i]>s[j+1][i])
				{
					ans = "NO\n";
					cout<<ans;
					break;
				}
			}
			if(ans=="NO\n")
				break;
		}
		if(ans=="YES\n")
			cout<<ans;
	}
}