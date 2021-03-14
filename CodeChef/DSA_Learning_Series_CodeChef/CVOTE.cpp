#include <iostream>
#include<map>
//#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<string,int> &a, const pair<string,int> &b)
{
    if(a.second < b.second)
        return true;
    else if(a.second == b.second)
        return (a.first > b.first);
    else
        return false;
}

int main() {
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;
    
    // stores name of chef and country he belongs to 
    map<string,string> chef_country;
    // stores name of country and how many votes they got 
    map<string,int> country_votes;
    // stores name of hef and how many votes he got 
    map<string,int> chef_votes;
    
    // get chef names 
    for(int i = 0; i < n; ++i)
    {
        string chef, country;
        
        // take chef name and coutnry as input
        cin >> chef >> country;
        // insert this to chef_country 
        chef_country.insert(make_pair(chef, country));
        
        // add this country to country_votes
        country_votes.insert(make_pair(country, 0));
        
        // add this chef to chef_votes
        chef_votes.insert(make_pair(chef, 0));
    }
    
    // take the votes
    for(int i = 0; i < m; ++i)
    {
        string chef, country;
        
        // take chef name from votes
        cin >> chef;
        
        // get country of this chef 
        country = chef_country.at(chef);
        
        // update votes
        country_votes[country] += 1;
        chef_votes[chef] += 1;
    }
    
    string chef, country;
    
    chef = max_element(chef_votes.begin(), chef_votes.end(), compare)->first;
    country = max_element(country_votes.begin(), country_votes.end(), compare)->first;
    
    cout << country << "\n" << chef;
    
	return 0;
}

