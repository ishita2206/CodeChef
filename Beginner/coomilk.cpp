#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
#if 0
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		int n;
		bool check, followed = true;
		cin >> n;
		cin >> str;
		if(str == "cookie" )
			check = true;
		n--;
		if( n == 0 && check == true )
		{
			cout << "NO\n";
			continue;
		}
		while(n--)
		{
			cin >> str;
			if( check == true )
			{
				if( str != "milk" )
					followed = false;
				check = false;
			}
			else if( str == "cookie" )
				check = true;
		}
		if( followed == true )
			cout << "YES\n";
		else
			cout << "NO\n";
	}
#endif

	int T,n,i;
    	char S[51][7];
    	char ans[4];
    	scanf("%d",&T);
    	while(T--)
    	{
        	memset(S,0,sizeof(S[0][0])*51*7);
        	scanf("%d",&n);
        	for(i=0;i<n;i++)
        	{
            		scanf("%s",S[i]);
        	}
        	strcpy(ans,"YES");
        	for(i=0;i<n;i++)	
            		if(!strcmp(S[i],"cookie") && strcmp(S[i+1],"milk"))
            		{
                		strcpy(ans,"NO");
                		break;
            		}
        	printf("%s\n",ans);
	}
}
