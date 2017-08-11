#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string num;
		cin >> num;
		int first = (int)(num[0] - '0');
		int last = (int)(num[num.length()-1] - '0');

		cout << first+last << "\n";
	}
	return 0;
}
