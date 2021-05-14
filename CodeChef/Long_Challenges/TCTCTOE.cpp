#include <iostream>
//#include <vector>
//#include <algorithm>

using namespace std;

bool check_row(int game[3][3], int player)
{
    for(int i = 0; i < 3; ++i)
        if( (game[i][0] == player) && (game[i][1] == player) && (game[i][2] == player) )
            return true;
    
    return false;
}

bool check_col(int game[3][3], int player)
{
    for(int i = 0; i < 3; ++i)
        if( (game[0][i] == player) && (game[1][i] == player) && (game[2][i] == player) )
            return true;
    
    return false;
}

bool check_diag(int game[3][3], int player)
{
    if( (game[0][0] == player) && (game[1][1] == player) && (game[2][2] == player) )
        return true;
    if( (game[0][2] == player) && (game[1][1] == player) && (game[2][0] == player) )
        return true;
    
    return false;
    
}
int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
        
    while( t-- )
    {
        int a[3][3];
        char temp;

        // variable to count number of marks of player 1 and 2
        int count_x = 0, count_o = 0;
        
        for(int i = 0; i < 3; ++i)
            for(int j = 0; j < 3; ++j)
            {
                cin >> temp;
                switch(temp)
                {
                    case '_' : a[i][j] = -1;
                        break;
                    case 'X' : a[i][j] = 1;
                        ++count_x;
                        break;
                    case 'O' : a[i][j] = 0;
                        ++count_o;
                        break;
                }
            }
            
        
        bool x_wins = (check_row(a, 1) || check_col(a, 1) || check_diag(a, 1));
        bool o_wins = (check_row(a, 0) || check_col(a, 0) || check_diag(a, 0));
        
        int res = -1;
        
        // check number of moves
        if(count_o > count_x)
        {
            // not possible
            res = 3;
        }
        if(count_x > count_o + 1)
        {
            // not possible
            res = 3;
        }
        
        // chec =k winners
        if(x_wins)
        {
            if(count_x != count_o+1)
            {
                // not possible
                res = 3;
            }
            // if o also wind
            if(o_wins)
            {
                // not possible
                res = 3;
            }
            else
            {
                if(res != 3)
                    // a wins
                    res = 1;
            }
        }
        if(o_wins)
        {
            if(count_x != count_o)
            {
                // not possible
                res = 3;
            }
            else if(x_wins)
            {
                // not possible
                res = 3;
            }
            else
            {
                if(res != 3)
                    // o wins
                    res = 1;
            }
        }
        if(x_wins && o_wins)
        {
            // not possible
            res = 3;
        }
        // if nobosy wins
        if(!x_wins && !o_wins)
        {
            // moves left
            if(count_x + count_o != 9)
            {
                if(res != 3)
                    res = 2;
            }
            else
            {
                if(res != 3)
                    // draw
                    res = 1;
            }
        }
        
        cout << res << "\n";
    }
    
	return 0;
}

