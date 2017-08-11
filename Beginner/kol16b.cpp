#include<iostream>
#define MAX 10001
using namespace std;
int main()
{
	int t,n,i,p;
	long a[MAX]={0},b[MAX]={0};
	cin >> t; 
	for(i = 0 ; i < t ; i ++)
	{
		int n;
		cin >> n;
		for(int j = 0 ; j < n ; j ++ )
			cin >> a[j];
		for(int j = 0 ; j < n ; j ++ )
		{
   			b[j]=a[j];
   			b[j]=b[j]>>16;
   			//a[j]=a[j]<<16;
   			a[j] -= (b[j] << 16 );
			//a[j]=a[j]>>16;
		}
		cout << "Case "<<i+1<<":\n";
		for( int j=0;j<n;j++)
			cout << a[j] << " ";
		cout << endl;
		for( int j = 0 ; j < n ; j ++ )
			cout << b[j] << " ";
		cout << endl;
	}
	return 0;
}    
