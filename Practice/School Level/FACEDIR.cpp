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
        int turns;
        cin>>turns;
        
        turns %= 4;
        
        if(turns == 0)
        cout<<"North\n";
        else if(turns == 1)
        cout<<"East\n";
        else if(turns == 2)
        cout<<"South\n";
        else
        cout<<"West\n";
        
    }
    
	return 0;
}
