#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)


int main() 
{
    fastIO
	
    testloop
    {
        int prep, ep, duration;
        
        cin>>prep>>ep>>duration;
        
        duration *= ep;
        
        if(prep-duration > 0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
    
	return 0;
}
