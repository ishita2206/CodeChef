#include <iostream>
#include <cstdio>
using namespace std;
int find_gcd(unsigned long long int, unsigned long long int);
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
 		unsigned long long int num1,num2,gcd,lcm;
 		//scanf("%d %d",&num1,&num2);
 		cin >> num1 >> num2 ;
		gcd=find_gcd(num1,num2);
 
		lcm = num1*num2;
		lcm /= gcd ; 
 		cout << gcd << " " << lcm << endl;
	}
	return 0;
}
 
int find_gcd(unsigned long long int n1,unsigned long long int n2)
{
	while(n1!=n2)
	{
  		if(n1>n2)
   			return find_gcd(n1-n2,n2);
   		return find_gcd(n1,n2-n1);
 	}
 	return n1;
}

