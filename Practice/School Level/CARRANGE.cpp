#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)


int main() 
{
    fastIO
	
    testloop
    {
        int people, base, fuel;
        cin>>people>>base>>fuel;
        
        people -= 1;
        
        base -= people;
        
        cout<< fuel * base <<endl;
    }
    
	return 0;
}
