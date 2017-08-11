#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
#if 0
		int a;
		unsigned long int score = 0;
		cin >> a;
		string nationality;
		cin >> nationality;
		
		string activity;
		int rank;
		while(a--)
		{
			cin >> activity;
			if( activity == "CONTEST_WON" )
			{
				cin >> rank;
				score += 300 - ( 20-rank > 0 ? 20-rank : 0 );
			}
			else if ( activity == "BUG_FOUND" )
			{
				cin >> rank;
				score += rank;
			}
			else if( activity[0] == 'T')
				score += 300;
			else
				score += 50;
		}
		if( nationality[0] == 'I')
			cout << score/200 << endl;
		else
			cout << score/400 << endl;
#endif
	int activities, points = 0;
        string origin;
        cin >> activities >> origin;
        while (activities--) {
            string kind;
            cin >> kind;
            if (kind == "CONTEST_WON") {
                int rank;
                cin >> rank;
                int bonus = max(0, 20 - rank);
                points += 300 + bonus;
            } else if (kind == "TOP_CONTRIBUTOR") {
                points += 300;
            } else if (kind == "BUG_FOUND") {
                int severity;
                cin >> severity;
                points += severity;
            } else if (kind == "CONTEST_HOSTED") {
                points += 50;
            }
        }
        cout << points / (origin == "INDIAN" ? 200 : 400) << endl;
	}
	return 0;
}
