#include <iostream>

#define A "CONTEST_WON"
#define B "TOP_CONTRIBUTOR"
#define C "BUG_FOUND"
#define D "CONTEST_HOSTED"

#define O1 "INDIAN"
#define O2 "NON_INDIAN"

using namespace std;

int main( void )
{
	ios :: sync_with_stdio(0);
	cin.tie(0);
	
	int t,n, severity;
	string origin, activity;
	long int score = 0;
	cin >> t;
	
	while( t-- )
	{
		cin >> n >> origin;
		score = 0;
		while(n--)
		{
			cin >> activity;
			
			if( activity == A )
			{
				cin >> severity;
				score += 300;
				if( severity < 20 )
					score += 20 - severity;
			}
			else if( activity == B )
			{
				score += 300;
			}
			else if( activity == C )
			{
				cin >> severity;
				score += severity;
			}
			else if( activity == D )
			{
				score += 50;
			}	
		}
		
		if( origin == O1 )
			cout << score / 200 << "\n";
		else
			cout << score / 400 << "\n";
	}
	
	return 0;
}

