#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)


int main() 
{
    fastIO
	
    testloop
    {
        int turns, a, b;
        
        cin>>turns>>a>>b;
        
        cout<<( 2 * ( 180 + turns) ) - (a + b)<<endl;
    }
    
	return 0;
}
