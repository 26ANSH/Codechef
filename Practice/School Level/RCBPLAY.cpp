#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)
#define ll long long int
#define ull unsigned long long int
#define loop(a, b) for(int i = a; i<b; i++)

int main() 
{
    fastIO
	
    testloop
    {
        int points, req, games;
        cin>>points>>req>>games;
        
        points += (games*2);
        
        if(points >= req)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    
	return 0;
}
