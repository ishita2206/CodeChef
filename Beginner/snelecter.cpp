#include <iostream>
#include <string>

using namespace std;

void elect()
{
        string x;
        cin>>x;
        int count1=0,count2=0;

        int i;

        count1=0;
count2=0;
    for(i=0;i<x.length();i++){
        if(x[i]=='s'){
            count1++;
        }
        else{
            count2++;
        }
    }
    for(i=0;i<x.length();i++){
        if(x[i]=='s'&&x[i+1]=='m'||x[i]=='m'&&x[i+1]=='s'){
            count1--;
            i++;
        }
    }
    if(count1>count2){
        cout<<"snakes\n";
    }
    else if(count1<count2){
        cout<<"mongooses\n";
    }
    else{
        cout<<"tie\n";
    }
}

int main()
{
        int t;
        cin >> t;
        while(t--)
                elect();
        return 0;
}
