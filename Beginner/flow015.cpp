#include <iostream>

using namespace std;

int isleap(int i)
{
        if((i%4==0&& i%100!=0)||(i%400==0))
		return 1;
	return 0;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int y, c=0;
		cin >> y;
		if(y>=2001)
         	{
             		int z=y-2001,i;
             		for(i=2001;i<y;i++)
                 		if(isleap(i))
                 			c++;
             		int x=c+(z%7);
             		x %= 7;
			//while(x>=7)
             		//	x=x-7;
             		switch(x)
             		{
                 		case 0:cout<<"monday";break;
                 		case 1:cout<<"tuesday";break;
                 		case 2:cout<<"wednesday";break;
                 		case 3:cout<<"thursday";break;
                 		case 4:cout<<"friday";break;
                 		case 5:cout<<"saturday";break;
                 		case 6:cout<<"sunday";break;
             		}		
         	}
         	else
         	{
                 	int z=2001-y,i;
             		for(i=2001;i>=y;i--)
                 		if(isleap(i))
             				c++;
             		int x=c+(z%7);
             		x %= 7;
			//while(x>=7)
             		//	x=x-7;
             		switch(x)
             		{
                 		case 0:cout<<"monday";break;
                 		case 6:cout<<"tuesday";break;
                 		case 5:cout<<"wednesday";break;
                 		case 4:cout<<"thursday";break;
                 		case 3:cout<<"friday";break;
                 		case 2:cout<<"saturday";break;
                 		case 1:cout<<"sunday";break;
             		}
         	}
         	cout<<"\n";
	}
}
