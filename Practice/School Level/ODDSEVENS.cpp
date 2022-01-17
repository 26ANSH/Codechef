#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)


int main() 
{
    fastIO
	
    testloop
    {
        int a, b;
        cin>>a>>b;
        
        if((a+b)%2 == 0)
        cout<<"Bob"<<endl;
        else
        cout<<"Alice"<<endl;
    }
    
	return 0;
}
