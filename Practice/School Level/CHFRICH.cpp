#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)


int main() 
{
    fastIO
	
    testloop
    {
        int income, target, rate;
        
        cin>>income>>target>>rate;
        
        cout<< (target - income)/rate <<endl;
        
    }
    
	return 0;
}
