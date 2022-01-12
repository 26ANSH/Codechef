#include <iostream>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)

int main() 
{
    fastIO
	
    testloop
    {
        int max = 0, pop, drink;
        for(int i = 0;i <3; i++)
        {
            cin>>pop>>drink;
            
            if((pop + drink) > max)
            max = pop + drink;
        }
        cout<<max<<endl;
    }

    
	return 0;
}
