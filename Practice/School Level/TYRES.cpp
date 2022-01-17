#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)


int main() 
{
    fastIO
	
    testloop
    {
        int tyres;
        cin>>tyres;
        
        if(tyres%4 == 0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    
	return 0;
}
