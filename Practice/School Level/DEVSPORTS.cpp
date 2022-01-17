#include <iostream>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testloop int test;cin>>test;while(test--)


int main() 
{
    fastIO
	
    testloop
    {
        int income, trip, watersport = 0, temp = 0;
        cin>>income>>trip;
        
        for(int i = 0; i<3; i++)
        {
            cin>>temp;
            watersport += temp;
        }
        
        temp = income - (watersport + trip);
        
        if(temp >= 0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
        
        
    }
    
	return 0;
}
