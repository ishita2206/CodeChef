#include <iostream>
using namespace std;

int n;
int t;
string first;
int arr[1111];

int main()
{
	cin>>t;
	while(t--)
	{
		cin >> n >> first;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		if( first=="Dee" && n==1 && arr[0]%2==0 )
			cout<<"Dee"<<endl;
		else 
			cout<<"Dum"<<endl;
	}
}
