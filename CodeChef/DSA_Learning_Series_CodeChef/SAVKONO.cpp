#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while( t-- )
    {
        long long int n,z;
        cin >> n >> z;
        
        // temp variable for taking input
        int temp;
        
        // priority queue for storing soldiers
        priority_queue<int> powers;
        
        for(int i = 0; i < n; ++i)
        {
            cin >> temp;
            powers.push(temp);
        }
        
        // number of times the soldiers have to attack
        long long int count = 0;
        
        // repeat until pain is defeated or all soldiers are defeated
        while(z >= 0 && !powers.empty())
        {
            // get highest poer soldier
            int curr_power = powers.top();
            
            // attack with irst soldier
            z -= curr_power;
            
            // increase count of soldiers who attaked
            ++count;
            
            // remove this soldier from queue
            powers.pop();
            
            // calc new power of soldier
            curr_power /= 2;
            
            // check if this soldier can attack again
            if(curr_power > 0)
                // add this to the queue
                powers.push(curr_power);
        }
        
        // check if pain was defeated
        if(z <= 0)
            cout << count << "\n";
        else
            cout << "Evacuate\n";
    }
    
	return 0;
}

